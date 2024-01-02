#pragma once
#include "Nokta.h"
#include<iostream>
#include <cmath>
#include <string>
#define M_PI 3.14159265358979323846

using namespace std;

class DogruParcasi {
private:
    Nokta baslangicNoktasi;
    Nokta bitisNoktasi;

public:
    DogruParcasi(const Nokta& baslangýc, const Nokta& bitis);
    DogruParcasi(const DogruParcasi& other);
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim);
    const Nokta& getBaslangicNoktasi() const;
    const Nokta& getBitisNoktasi() const;
    double uzunluk() const;
    Nokta kesisimNoktasi(const Nokta& digerNokta) const;
    Nokta ortaNokta() const;
    string toString() const;
    void yazdir() const;
    void setP1(const Nokta& newP1);
    void setP2(const Nokta& newP2);
};

