#ifndef PENTAGON_H
#define PENTAGON_H

#include "figure.h"
#include <iostream>

class Pentagon : public Figure {
    public:
    Pentagon();
    virtual ~Pentagon();
    size_t VertexesNumber();
    double square();
    void Print();
    private:
    Point a,b,c,d,e;
};

#endif // PENTAGON_H