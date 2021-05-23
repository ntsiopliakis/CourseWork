#include <array> //for std::array
#include "font_segoeUISemibold_48pt.h"
#include "font_segoeUISemibold_24pt.h"
#include "ScreenWallPapers.h";

enum class Color: std::uint8_t
{
    Black = 0x00,
    White = 0xFF
};



struct Point
{
  constexpr Point(std::uint16_t xValue, std::uint16_t yValue): 
    x(xValue),
    y(yValue)
  { 
  }
  std::uint16_t x = 0U;
  std::uint16_t y = 0U;  
};


template <std::uint16_t width, std::uint16_t height>
class ScreenDriver
{

public:
  
  void ResetImage()
  {
    image=defaultImage;
  }
  
void SetPixel(Point point, Color color)
    {
      assert ((point.x <= width) && (point.y <= height)) ;
      std::uint32_t address =  point.x / 8  + point.y * WidthByte ;
      std::uint8_t rData = image[address] ;
      if (color == Color::Black)
      {
        image[address] = rData & ~(0x80U >> (point.x % 8U));
      } else
      {
        image[address] = rData | (0x80U >> (point.x % 8U)); ;
      }
    }

    void Clear(Color color)
    {
      for (std::uint16_t y = 0; y < HeightByte; ++y)
      {
        for (std::uint16_t x = 0; x < WidthByte; ++x )
        {//8 pixel =  1 byte
          std::uint32_t address = x + y * WidthByte;
          image[address] = color;
        }
      }
    }

    void ClearWindows(Point startPoint, Point endPoint, Color color)
    {
      assert ((endPoint.x <= width) && (endPoint.y <= height)) ;

      for (std::uint16_t y = startPoint.y; y < endPoint.y; ++y)
      {
        for (std::uint16_t x = startPoint.x; x < endPoint.x; ++x)
        {//8 pixel =  1 byte
          SetPixel(Point{x,y}, color);
        }
      }
    }

    std::uint32_t DrawChar(Point point, const char letter)
    {
      assert ((point.x <= width) && (point.y <= height)) ;
      size_t symbolIndex =  letter - font->firstIndex;
      size_t offset = 0U;

      std::uint16_t fwidth = point.x + font->fontIndex[symbolIndex].width;
      //check the limits of display screen, if out of screen take it to attention
      if(point.x < width)
      {
        if (fwidth > width)
        {
          fwidth =  width - point.x;
          offset = ((font->fontIndex[symbolIndex].width - 1) >> 3) - (fwidth >> 3);
        } else
        {
          fwidth = font->fontIndex[symbolIndex].width;
          offset = 0;
        }

        size_t index = font->fontIndex[symbolIndex].index;

        const unsigned char *ptr = &font->fontTable[index];
        std::uint8_t k = 0;
        std::uint8_t mask = *ptr;

        for (std::uint16_t i = 0; i < font->height; ++i)
        {
          for (std::uint16_t j = 0; j < fwidth; ++j)
          {
            if(!(k & 0x07))
            {
              mask = *ptr++;
            }
            
            SetPixel(Point(point.x + j, point.y + i), (mask & 0x80) ? foreground : background) ;
            mask <<= 1;
            k ++;
          }
          k = 0;
          ptr += offset;
        }
      }
      return fwidth ;
    }

  void DrawString(Point point, char const *str)
  {
    std::uint16_t x = point.x;
    std::uint16_t position = 0;
  
    while(*str) 
    {

      if(position != 0)
      {
        ClearWindows(Point(x,point.y), Point(x + font->spaceSize, point.y + font->height), background) ;
        //this->DrawBox(x, yPos, this->pCurrentFont->spaceSize,
        //              this->pCurrentFont->height, colorGround);
        x += font->spaceSize;
      }
      if(x > (width - font->spaceSize)) 
      {
        break;
      }
      if (*str != 32)
      {
        position = DrawChar(Point{x, point.y}, *str);
        x += position ;
      } else
      {
        //this->DrawBox(x, yPos, this->pCurrentFont->height / 3, 
        //              this->pCurrentFont->height, colorGround);
        x += font->height / 3;
      }
      str++;
    }  
  }

  void SetFont(tFont* newFontInfo)
  {
      font = const_cast<tFont*>(newFontInfo);
  }

  ScreenDriver(
          const std::array<std::uint8_t, ((width % 8 == 0)? (width / 8 ): (width / 8 + 1)) * height> & defaultImage = blackWallPaper,
          tFont* font = const_cast<tFont*>(&segoeUISemibold_24ptFontInfo) )
          :defaultImage(defaultImage),image(defaultImage),font(font)
          {
          }

    std::array<std::uint8_t, ((width % 8 == 0)? (width / 8 ): (width / 8 + 1)) * height> image ;
    const std::array<std::uint8_t, ((width % 8 == 0)? (width / 8 ): (width / 8 + 1)) * height>& defaultImage ;
    
private:
    const tFont* font = const_cast<tFont*>(&segoeUISemibold_24ptFontInfo) ;
    const std::uint16_t WidthByte = (width % 8 == 0)? (width / 8 ): (width / 8 + 1);
    const std::uint16_t HeightByte = height;
    const Color foreground = Color::White ;
    const Color background = Color::Black ;
};
ScreenDriver<400,300> screen(susuWallPaper);

