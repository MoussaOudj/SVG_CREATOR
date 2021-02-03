//
// Created by OUDJAMA Moussa (Canal Plus) on 02/02/2021.
//

#ifndef SVG_CREATOR_SVGCREATOR_H
#define SVG_CREATOR_SVGCREATOR_H
#include <fstream>
#include "iostream"
using namespace std;

class SvgCreator {
public:
    SvgCreator();
    void prepareOutput();
    void setDimension(double dimension);
    void setBackground(string bg);
    void create();
private:
    double dimension;
    string backgroundColor;
    ofstream output;
};


#endif //SVG_CREATOR_SVGCREATOR_H
