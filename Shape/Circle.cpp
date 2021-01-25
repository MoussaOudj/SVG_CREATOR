//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "Circle.h"
#include <fstream>

Circle::Circle(){

}

Circle::Circle(float x, float y, float radius){
    this->m_center = Point(x,y);
    this->m_radius = radius;
}



void Circle::setCenter(Point point){
    this->m_center = point;
}



Point Circle::getCenter(){
    return this->m_center;
}

void Circle::setRadius(float radius){
    this->m_radius = radius;
}

float Circle::getRadius(){
    return this->m_radius;
}

void Circle::drawIn(std::ofstream &output) {
    output << "<circle cx='" << this->getCenter().getX() << "' cy='" << this->getCenter().getY() << "' r='" << this->getRadius() << "'";
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << std::endl;
}