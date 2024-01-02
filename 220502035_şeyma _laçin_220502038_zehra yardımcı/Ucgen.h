#pragma once
#include "Nokta.h"
#include "DogruParcasi.h"
#include<iostream>
#include <cmath>
#include <string>
#define M_PI 3.14159265358979323846

using namespace std;

class Ucgen {
private:
    Nokta nokta1;
    Nokta nokta2;
    Nokta nokta3;

public:
    Ucgen(const Nokta& n1, const Nokta& n2, const Nokta& n3);
    const Nokta& getNokta1() const;
    const Nokta& getNokta2() const;
    const Nokta& getNokta3() const;
    void setNokta1(const Nokta& n1);
    void setNokta2(const Nokta& n2);
    void setNokta3(const Nokta& n3);
    string toString() const;
    double alan() const;
    double cevre() const;
    double* acilar() const;
};

