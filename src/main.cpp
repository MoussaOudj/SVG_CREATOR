#include <iostream>
#include "../headers/SvgCreator.h"


#include <fstream>


using namespace std;

void createSVG();

int main() {

    std::cout << "SVG CREATOR - PROJET ESGI" << std::endl;
    std::cout << "Moussa OUDJAMA / Yannis MEKAOUCHE" << std::endl;

    int choix;
    cout << "MENU SVG" << endl
    << "1- Creer un SVG" << endl
    << "2- Lire un SVG" << endl;
    cin >> choix;

    switch (choix) {
        case 1:
            createSVG();
            break;
        case 2:
            string filename;
            cout << "Nom du fichier" << endl;
            cin >> filename;
            ifstream infile(filename+".svg");
            for( std::string line; getline( infile, line );)
            {
                cout << line << endl;
            }
            break;
    }



    return 0;
}


void createSVG() {
    SvgCreator svgCreator;
    double size;
    string backgroundColor;

    cout << "Dimension de l'image : ";
    cin >> size;
    svgCreator.setDimension(size);

    cout << "Couleur du background : " << endl
         << "Red" << endl
         << "Green" << endl
         << "Blue" << endl
         << "White" << endl
         << "Black" << endl;
    cin >> backgroundColor;

    svgCreator.setBackground(backgroundColor);

    svgCreator.prepareOutput();
    svgCreator.create();
}
