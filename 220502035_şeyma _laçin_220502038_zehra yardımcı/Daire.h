#pragma once
#include "Nokta.h"
#include<iostream>
#include <cmath>
#include <string>
#define M_PI 3.14159265358979323846

using namespace std;

class Daire {
private:
    Nokta merkez;
    double yaricap;

public:
    Daire(const Nokta& m, double r);
    Daire(const Daire& other);
    Daire(const Daire& other, double x);
    double alan() const;
    double cevre() const;
    int kesisim(const Daire& digerDaire) const;
    std::string toString() const;
    void yazdir() const;
};

