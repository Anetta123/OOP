#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <iostream>

#include "figure.h"
using namespace std;

class Trapezoid : Figure {

public:
     Trapezoid();
    virtual ~Trapezoid();
    void print();
    double square();
    size_t VertexesNumber();

private:
    Point a, b, c, d;
};

#endif //TRAPEZOID_H