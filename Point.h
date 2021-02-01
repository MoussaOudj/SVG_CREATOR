//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_POINT_H
#define SVG_CREATOR_POINT_H

class Point{
public:
    Point();
    Point(float x, float y);
    float getX();
    float getY();
private:
    float m_x, m_y;
};

#endif



