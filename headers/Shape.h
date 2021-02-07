//
// Created by OUDJAMA Moussa (Canal Plus) on 01/02/2021.
//

#ifndef SVG_CREATOR_SHAPE_H
#define SVG_CREATOR_SHAPE_H
#include "Point.h"

class Shape {
    public:

    void setPosition(Point point){
        this->m_point = point;
    }
    Point getPosition(){
        return this->m_point;
    }
    private:
        Point m_point;
};
#endif