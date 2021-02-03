//
// Created by OUDJAMA Moussa (Canal Plus) on 25/01/2021.
//

#ifndef SVG_CREATOR_TRIANGLE_H
#define SVG_CREATOR_TRIANGLE_H

#include <fstream>
#include "../Point.h"
#include "Shape.h"


class Triangle: public Shape {

public:
    Triangle();
    void drawIn(std::ofstream &output);
};
#endif //SVG_CREATOR_TRIANGLE_H
