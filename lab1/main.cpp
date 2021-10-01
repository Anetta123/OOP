#include <iostream>
#include "point.h"
#include "trapezoid.h"
#include "rhombus.h"
#include "pentagon.h"
using namespace std;

int main() {

    cout << "Enter Rhombus coordinates "<< a.VertexesNumber()<<endl;
    Rhombus a(cin);
    a.print();
    cout << "Square = " << a.square() <<endl;

    cout << "Enter Trapezoid coordinates " << b.VertexesNumber() <<endl;
    Trapezoid b(cin);
    b.print();
    cout << "Square = " << b.square() <<endl;
    
    cout << "Enter Pentagon coordinates " << c.VertexesNumber() <<endl;
    Pentagon c(cin);
    c.print();

    cout << "Square = " << c.square() <<endl;
}