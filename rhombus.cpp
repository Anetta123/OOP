#include "rhombus.h"
#include <iostream>
using namespace std;

Rhombus::Rhombus() {
    cout << "Enter 4 points of Rhombus "<<endl;
    cin >> a >> b >> c >> d;
}


void Rhombus::print() {
   cout<<"Rhombus"<<endl;
   
   cout << a << b << c << d << endl;
}

double Rhombus::square() {
       double D1 = a.dist(c);
       double D2 = b.dist(d);
        
        return (D1 + D2)* 0.5;
}

Rhombus::~Rhombus(){
    cout<<"Rhombus deleted" <<endl;
}

size_t Rhombus::VertexesNumber() {
    return 4;
}