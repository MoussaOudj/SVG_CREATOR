//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_CIRCLE_H
#define SVG_CREATOR_CIRCLE_H
#include "../Point.h"
#include <fstream>

class Circle{
public:
    Circle();
    Circle(float x, float y, float radius);
    void drawIn(std::ofstream &output);

    void setCenter(Point point);
    Point getCenter();
    void setRadius(float radius);
    float getRadius();

private:
    Point m_center;
    float m_radius;
};


#endif //SVG_CREATOR_CIRCLE_H
