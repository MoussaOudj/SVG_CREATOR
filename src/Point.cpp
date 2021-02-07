//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "../headers/Point.h"
Point::Point(){
    this->m_x = 1;
    this-> m_y = 1;
}

Point::Point(float x, float y){
    this->m_x = x;
    this->m_y = y;
}

float Point::getX(){
    return this->m_x;
}

float Point::getY(){
    return this->m_y;
}