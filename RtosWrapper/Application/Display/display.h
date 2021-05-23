#pragma once
#include "epddriverconfig.h"
#include "ScreenDriver.h"
template<auto& epaperdisplay, auto& screen>
class Display
{
  public:
    void DrawString(Point point, char const *str)
    {
      screen.DrawString(point,str);
    }
    void ResetImage()
    {
      screen.ResetImage();
    }
    void UpdateWindow(Point startPoint,Point endPoint)
    {
      epaperdisplay.UpdatePartialWindow(screen.image.data(), startPoint.x, startPoint.y, endPoint.x, endPoint.y);
    }   
};

Display<eInkDisplay,screen> display;

