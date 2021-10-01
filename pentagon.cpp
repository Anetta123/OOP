#include "pentagon.h"
using namespace std;

Pentagon::Pentagon(istream &in) {
    cout << "Enter 5 points of Pentagon"<<endl;
    in >> a >> b >> c >> d >> e;
}
void Pentagon::print() {

   cout << "Pentagon: " << a << b << c << d << e <<endl;
}

double Pentagon::square() 
{
    double A = a.dist(b);
    double B = b.dist(c);
    double C = c.dist(d);
    double D = d.dist(e);
    double E = e.dist(a);

    double M = a.dist(c);
    double L = a.dist(d);

    double p1 = (A + B + M) / 2;
    double p2 = (M + C + L) / 2;
    double p3 = (L + D + E) / 2;

    double S1 = sqrt(p1 * (p1 - A) * (p1 - B) * (p1 - M));
    double S2 = sqrt(p2 * (p2 - M) * (p2 - C) * (p2 - L));
    double S3 = sqrt(p3 * (p3 - L) * (p3 - D) * (p3 - E));

    return S1 + S2 + S3;

}

size_t Pentagon::VertexesNumber(){
    return 5;
}
Pentagon::~Pentagon() {
    cout << "Pentagon deleted" <<endl;
}