#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

#include "Point.h"
#include "Shape/Circle.h"
#include "Shape/Rect.h"
#include "Shape/Triangle.h"


using namespace std;
void drawShapeIn(ofstream &output);

void background(ofstream &output, string color, double size) {
    output << "<svg xmlns='http://www.w3.org/2000/svg'"
           << " width=\"" << size << "\" height=\"" << size << "\" version=\"1.1\">"
           << endl;
    transform(color.begin(), color.end(), color.begin(), ::toupper);

    if (color == "RED") {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(255,0,0)'/>" << endl;
    } else if (color == "GREEN") {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(0,255,0)'/>" << endl;
    } else if (color == "BLUE") {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(0,0,255)'/>" << endl;
    } else if (color == "WHITE") {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(255,255,255)'/>" << endl;
    } else if (color == "BLACK") {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(0,0,0)'/>" << endl;
    } else {
        output << "<rect x='0' y='0' width='" << size << "' height='" << size << "' fill='rgb(0,0,0)'/>" << endl;
    }
}

void generateSVG(string backgroundColor, double size) {
    ofstream output;
    output.open("art.svg");
    background(output, backgroundColor, size);
    drawShapeIn(output);
}

int main() {
    std::cout << "SVG CREATOR - PROJET ESGI" << std::endl;
    std::cout << "Moussa OUDJAMA / Yannis MEKAOUCHE" << std::endl;

    double size;
    string backgroundColor;
    ofstream output;

    cout << "Dimension de l'image : ";
    cin >> size;

    cout << "Couleur du background : " << endl
         << "Red" << endl
         << "Green" << endl
         << "Blue" << endl
         << "White" << endl
         << "Black" << endl;
    cin >> backgroundColor;
    generateSVG(backgroundColor, size);
    return 0;
}

void drawShapeIn(ofstream &output){
    int input_x;
    int input_y;

    int shape;
    cout << "Forme : " << endl
         << "1 - Rectangle" << endl
         << "2 - Cercle" << endl
         << "3 - Triangle" << endl;
    cin >> shape;

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

            rect.drawIn(output);
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
            circle.setCenter(Point(input_x,input_y));
            cout << "rayon du cercle : " << endl;
            cin >> input_r;
            circle.setRadius(input_r);

            circle.drawIn(output);
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
            triangle.drawIn(output);
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
            drawShapeIn(output);
            break;
        }
        case 2: {
            output << "</svg>" << endl;
            output.close();
            break;
        }
        default:
            break;
    }
}
