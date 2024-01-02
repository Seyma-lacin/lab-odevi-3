#include "Daire.h"
#include<iostream>
#include <cmath>
#include <string>
#define M_PI 3.14159265358979323846

using namespace std;

Daire::Daire(const Nokta& m, double r) {
    merkez = m;
    yaricap = r;
}

Daire::Daire(const Daire& other) {
    merkez = other.merkez;
    yaricap = other.yaricap;
}

Daire::Daire(const Daire& other, double x) {
    merkez = other.merkez;
    yaricap = other.yaricap * x;
}

double Daire::alan() const {
    return M_PI * yaricap * yaricap;
}

double Daire::cevre() const {
    return 2 * M_PI * yaricap;
}

int Daire::kesisim(const Daire& digerDaire) const {
    double uzaklik = sqrt(pow(merkez.getX() - digerDaire.merkez.getX(), 2) + pow(merkez.getY() - digerDaire.merkez.getY(), 2));

    if (uzaklik > yaricap + digerDaire.yaricap) {
        return 2; // Daireler tamamen ayrýk
    }
    else if (uzaklik <= abs(yaricap - digerDaire.yaricap)) {
        if (yaricap < digerDaire.yaricap) {
            return (uzaklik < digerDaire.yaricap - yaricap) ? 1 : 0; // 1: Bir daire diðerini içeriyor, 0: Daireler birbirine tam olarak deðiyor
        }
        else {
            return (uzaklik < yaricap - digerDaire.yaricap) ? 1 : 0; // 1: Bir daire diðerini içeriyor, 0: Daireler birbirine tam olarak deðiyor
        }
    }
    else {
        return 2; // Daireler kesiþiyor, ancak birbiriyle iç içe deðil
    }
}

string Daire::toString() const {
    return "Merkez: " + merkez.toString() + ", Yarýçap: " + to_string(yaricap);
}

void Daire::yazdir() const {
    cout << toString() << endl;
}