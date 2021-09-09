#include "Box.h"

// Implement setters and getters
     void Box::setlength(int l)
      {
        length=l;
      }
    void Box::setwidth(int w)
      {
        width=w;
      }
      void Box::setheight(int h)
      {
        height=h;
      }
    int Box::getLength()
    {
      return length;
    }
    int Box::getWidth()
      {
        return width;
      }
    int Box::getHeight()
      {
        return height;
      }
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width;
}
