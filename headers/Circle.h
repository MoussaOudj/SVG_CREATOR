//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_CIRCLE_H
#define SVG_CREATOR_CIRCLE_H
#include "Point.h"
#include "Shape.h"
#include <fstream>

class Circle: public Shape{
public:
    Circle();
    void drawIn(std::ofstream &output);
    void setRadius(float radius);
    float getRadius();

private:
    float m_radius;
};


#endif //SVG_CREATOR_CIRCLE_H
