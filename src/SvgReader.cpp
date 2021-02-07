//
// Created by OUDJAMA Moussa (Canal Plus) on 07/02/2021.
//

#include <fstream>
#include "../headers/SvgReader.h"
#include "vector"

void SvgReader::setFilename(string filename) {
    this->filename = filename;
}

string SvgReader::getFilename() {
    return this->filename;
}

void SvgReader::read() {
    ifstream infile(this->filename+".svg");

            for( std::string line; getline( infile, line );)
            {
                cout << line << endl;
                this->svgFile.push_back(line);
            }
}

void SvgReader::remove(int line){
    svgFile.erase(svgFile.begin() + 1);
}