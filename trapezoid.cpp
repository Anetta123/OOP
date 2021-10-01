#include "trapezoid.h"
#include <iostream>

using namespace std;

Trapezoid::Trapezoid() {
    cout << "Enter points"<<endl;
    cin >> a >> b >> c >> d>>endl;
    
}

void Trapezoid::print() 
{
   cout << "Trapezoid ";
   cout  << a << b << c << d << endl;
}

double Trapezoid::square() {
    double A = a.dist(b);
    double B = b.dist(c);
    double C = c.dist(d);
    double D = d.dist(a);
    double p = (A + B +C + D)/2;
    return sqrt(p * (p - A) * (p - B) * (p - C) * (p - D));

}
Trapezoid::~Trapezoid(){
    cout<<"Trapezoid deleted" <<endl;
}

size_t Trapezoid::VertexesNumber() {
    return 4;
}