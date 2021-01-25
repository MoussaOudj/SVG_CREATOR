//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_TRIANGLE_H
#define SVG_CREATOR_TRIANGLE_H

#include <fstream>
#include "../Point.h"


class Triangle {

public:
    Triangle();
    Triangle(float x, float y);
    void drawIn(std::ofstream &output);
    void setPosition(Point point);
    Point getPosition();
private:
    Point m_point;
};


#endif //SVG_CREATOR_TRIANGLE_H
