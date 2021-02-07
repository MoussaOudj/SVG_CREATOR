//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "../headers/Circle.h"
#include <fstream>

Circle::Circle(){

}

void Circle::setRadius(float radius){
    this->m_radius = radius;
}

float Circle::getRadius(){
    return this->m_radius;
}

void Circle::drawIn(std::ofstream &output) {
    output << "<circle cx='" << this->getPosition().getX() << "' cy='" << this->getPosition().getY() << "' r='" << this->getRadius() << "'";
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << std::endl;
}