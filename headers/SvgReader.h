//
// Created by OUDJAMA Moussa (Canal Plus) on 07/02/2021.
//

#ifndef SVG_CREATOR_SVGREADER_H
#define SVG_CREATOR_SVGREADER_H

#include "iostream"
#include "vector"

using namespace std;

class SvgReader {
public:
    void read();
    void setFilename(string filename);
    string getFilename();
    void remove(int line);
private:
    string  filename;
    vector<string> svgFile;
};


#endif //SVG_CREATOR_SVGREADER_H
