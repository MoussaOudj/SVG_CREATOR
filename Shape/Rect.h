//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_RECT_H
#define SVG_CREATOR_RECT_H
#include <fstream>
#include "../Point.h"
#include "Shape.h"


class Rect: public Shape {
public:
    Rect();
    Rect(float x, float y, int width, int height);
    void drawIn(std::ofstream &output);
    void setWidth(int width);
    int getWidth();
    void setHeight(int height);
    int getHeight();
private:
    int width, height;
};


#endif //SVG_CREATOR_RECT_H
