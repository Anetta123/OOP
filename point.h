#ifndef POINT_H
#define POINT_H


using namespace std;

class Point {
public:
    Point();
    Point(double x, double y);

    friend istream& operator>>(istream& is, Point& p);
    friend ostream& operator<<(ostream& os, Point& p);

    double x;
    double y;
};


#endif //POINT_H