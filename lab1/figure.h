#ifndef FIGURE_H
#define FIGURE_H

class Figure {

public:
    virtual void print() = 0;
    virtual double square() = 0;
    virtual size_t VertexesNumber() = 0;
   virtual ~Figure(){}

};

#endif //FIGURE_H