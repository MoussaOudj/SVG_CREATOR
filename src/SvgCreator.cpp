//
// Created by OUDJAMA Moussa (Canal Plus) on 02/02/2021.
//

#include "../headers/SvgCreator.h"
#include "iostream"
#include "../headers/Shape.h"
#include "../headers/Triangle.h"
#include "../headers/Circle.h"
#include "../headers/Rect.h"

using namespace std;

SvgCreator::SvgCreator(){

}

void SvgCreator::setDimension(double dimension) {
    this->dimension = dimension;
}

void SvgCreator::setBackground(string bg) {
    this->backgroundColor = bg;
}

void SvgCreator::prepareOutput() {

    string filename;
    cout << "Nom du fichier :" << endl;
    cin >> filename;
    this->output.open(filename + ".svg");

    this->output << "<svg xmlns='http://www.w3.org/2000/svg'"
           << " width=\"" << this->dimension << "\" height=\"" << this->dimension << "\" version=\"1.1\">"
           << endl;
    transform(this->backgroundColor.begin(), this->backgroundColor.end(), this->backgroundColor.begin(), ::toupper);
    if (this->backgroundColor == "RED") {
        this->output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(255,0,0)'/>" << endl;
    } else if (this->backgroundColor == "GREEN") {
        this->output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(0,255,0)'/>" << endl;
    } else if (this->backgroundColor == "BLUE") {
        this-> output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(0,0,255)'/>" << endl;
    } else if (this->backgroundColor == "WHITE") {
        this->output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(255,255,255)'/>" << endl;
    } else if (this->backgroundColor == "BLACK") {
        this->output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(0,0,0)'/>" << endl;
    } else {
        this->output << "<rect x='0' y='0' width='" << this->dimension << "' height='" << this->dimension << "' fill='rgb(0,0,0)'/>" << endl;
    }
}


void SvgCreator::create(){

    int input_x;
    int input_y;
    int shape;
    bool error = true;
    
    do {
        try {
            cout << "Forme : " << endl
                 << "1 - Rectangle" << endl
                 << "2 - Cercle" << endl
                 << "3 - Triangle" << endl;
            cin >> shape;
            if(cin.fail()){
                throw "Erreur d'ecriture";
            }else{
                error =  false;
            }
        }catch(const char* error){
            cout<<error<<endl;
            cin.clear();
            cin.ignore();
        }
    } while (error != false);


    switch (shape) {
        case 1 : {
            int input_width;
            int input_height;
            cout << "Dessine un rectangle" << endl;
            Rect rect;
            rect = Rect();
            cout << "Position x du rectangle : " << endl;
            cin >> input_x;
            cout << "Position y du rectangle : " << endl;
            cin >> input_y;
            rect.setPosition(Point(input_x,input_y));
            cout << "Longueur du rectangle : " << endl;
            cin >> input_height;
            cout << "Largeur du rectangle : " << endl;
            cin >> input_width;
            rect.setWidth(input_width);
            rect.setHeight(input_height);

            rect.drawIn(this->output);
            break;
        }
        case 2 : {
            int input_r;
            cout << "Dessine un cercle" << endl;
            Circle circle;
            circle = Circle();
            cout << "Position x du cercle : " << endl;
            cin >> input_x;
            cout << "Position y du cercle : " << endl;
            cin >> input_y;
            circle.setPosition(Point(input_x,input_y));
            cout << "rayon du cercle : " << endl;
            cin >> input_r;
            circle.setRadius(input_r);

            circle.drawIn(this->output);
            break;
        }
        case 3 : {
            cout << "Dessine un triangle" << endl;
            Triangle triangle;
            triangle = Triangle();
            cout << "Position x du triangle : " << endl;
            cin >> input_x;
            cout << "Position y du triangle : " << endl;
            cin >> input_y;
            triangle.setPosition(Point(input_x,input_y));
            triangle.drawIn(this->output);
            break;
        }
        default:
            break;
    }

    int choix;
    cout << "Redessiner une forme ?" << endl
         << "1- Oui" << endl
         << "2- Non" << endl;
    cin >> choix;

    switch (choix){
        case 1: {
            create();
            break;
        }
        case 2: {
            this->output << "</svg>" << endl;
            this->output.close();
            cout << "Fin de création de votre fichier svg" << endl;
            break;
        }
        default:
            break;
    }
}
