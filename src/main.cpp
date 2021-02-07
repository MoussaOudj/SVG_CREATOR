#include <iostream>
#include "../headers/SvgCreator.h"
#include "../headers/SvgReader.h"

using namespace std;

void createSVG();
void readSVG();

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
            readSVG();
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

void readSVG(){
    string filename;
    cout << "Nom du fichier" << endl;
    cin >> filename;
    SvgReader svgReader = SvgReader();
    svgReader.setFilename(filename);
    svgReader.read();

    int choix;
    cout << "Voulez vous apporter une modification au fichier ?" << endl
         << "1- Supprimer élements" << endl
         << "2- Modifier élements" << endl
         << "3- Non" << endl;
    cin >> choix;


    switch (choix) {
        case 1:
            int line;
            cout << "Quelle ligne ?" << endl;
            cin >> line;
            svgReader.remove(line);
            break;
        case 2:
            cout << "Feature non ajoutée " << endl;
            break;
        case 3:
            cout << "FIN" << endl;
            break;
    }

}
