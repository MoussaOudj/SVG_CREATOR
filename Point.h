//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_POINT_H
#define SVG_CREATOR_POINT_H


class Point{
public:
    Point();
    Point(float x, float y);
    void setX(float x);
    float getX();
    void setY(float y);
    float getY();
    void add(Point point);
    void scale(float scalingValue);
private:
    float m_x, m_y;
};


#endif //SVG_CREATOR_POINT_H
