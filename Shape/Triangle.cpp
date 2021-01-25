//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "Triangle.h"

/*
void fill(ofstream &output) {
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << endl;
}

void triangle(ofstream &output) {
    output << "<polygon points='" << 100 << "," << 30 << " " << 200 << "," << 200 << " " << 0 << "," << 200 << "'";
    fill(output);
    //<polygon points="110 0, 220 220, 0 220"/>
}*/

Triangle::Triangle(){
}

Triangle::Triangle(float x, float y) {
    this->m_point = Point(x,y);
}

void Triangle::drawIn(std::ofstream &output){
    output << "<polygon points='" << 250 << "," << 60 << " " << this->getPosition().getX() << "," << this->getPosition().getY() << " " << this->getPosition().getX()+300 << "," << this->getPosition().getY() << "'";
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << std::endl;
}

void Triangle::setPosition(Point point){
    this->m_point = point;
}

Point Triangle::getPosition(){
    return this->m_point;
}