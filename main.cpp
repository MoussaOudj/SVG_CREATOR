#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void fill(ofstream &output) {
    output << " fill='rgb(" << rand() % 256 << "," << rand() % 256 << "," << rand() % 256 << ")'/>" << endl;
}

void rect(ofstream &output) {
    output << "<rect x='" << 40 << "' y='" << 40 << "' width='" << 20 << "' height='" << 20 << "'";
    fill(output);
}

void circle(ofstream &output) {
    output << "<circle cx='" << 20 << "' cy='" << 20 << "' r='" << 20 << "'";
    fill(output);
}

void triangle(ofstream &output) {
    output << "<polygon points='" << 100 << "," << 30 << " " << 200 << "," << 200 << " " << 0 << "," << 200 << "'";
    fill(output);
}


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

void generateSVG(string backgroundColor, double size, int shape) {
    ofstream output;
    output.open("art.svg");
    background(output, backgroundColor, size);

    switch (shape) {
        case 1 :
            cout << "Dessine un carrée" << endl;
            rect(output);
            break;
        case 2 :
            cout << "Dessine un cercle" << endl;
            circle(output);
            break;
        case 3 :
            cout << "Dessine un triangle" << endl;
            triangle(output);
            break;
        default:
            break;

    }
    fill(output);
    output << "</svg>" << endl;
    output.close();
}


int main() {
    std::cout << "SVG CREATOR - PROJET ESGI" << std::endl;
    std::cout << "Moussa OUDJAMA / Yannis MEKAOUCHE" << std::endl;

    double size;
    int shape;
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

    cout << "Forme : " << endl
         << "1 - Carée" << endl
         << "2 - Cercle" << endl
         << "3 - Triangle" << endl;
    cin >> shape;

    generateSVG(backgroundColor, size, shape);

    return 0;
}
