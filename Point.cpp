//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "Point.h"
Point::Point(){
    this->m_x = 1;
    this-> m_y = 1;
}

Point::Point(float x, float y){
    this->m_x = x;
    this->m_y = y;
}

void Point::add(Point point){
    this->m_x += point.getX();
    this->m_y += point.getY();
}

void Point::scale(float scalingValue){
    this->m_x *= scalingValue;
    this->m_y *= scalingValue;
}

void Point::setX(float x){
    this->m_x = x;
}

float Point::getX(){
    return this->m_x;
}

void Point::setY(float y){
    this->m_y = y;
}

float Point::getY(){
    return this->m_y;
}