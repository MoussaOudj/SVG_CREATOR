//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#include "../headers/Rect.h"
Rect::Rect(){
}

Rect::Rect(float x, float y, int width, int height) {
    this->setPosition(Point(x,y));
    this->width = width;
    this->height = height;
}

void Rect::drawIn(std::ofstream &output){
    output << "<rect x='" << this->getPosition().getX() << "' y='" << this->getPosition().getY() << "' width='" << this->getWidth() << "' height='" << this->getHeight() << "'";
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << std::endl;
}


void Rect::setWidth(int width){
    this->width = width;
}

int Rect::getWidth(){
    return  this->width;
}

void Rect::setHeight(int height){
    this->height = height;
}

int Rect::getHeight(){
    return  this->height;
}