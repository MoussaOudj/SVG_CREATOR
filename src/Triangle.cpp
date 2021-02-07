//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "../headers/Triangle.h"

Triangle::Triangle(){
}
void Triangle::drawIn(std::ofstream &output){
    output << "<polygon points='" << 250 << "," << 60 << " " << this->getPosition().getX() << "," << this->getPosition().getY() << " " << this->getPosition().getX()+300 << "," << this->getPosition().getY() << "'";
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << std::endl;
}