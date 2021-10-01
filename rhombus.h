#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <iostream>
#include "figure.h"

class Rhombus : public Figure {
public:
    Rhombus();
    void print();
    double square();
    size_t VertexesNumber();
private:
    Point a, b, c, d;

};
#endif // RHOMBUS_H