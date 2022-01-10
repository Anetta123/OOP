#include "trapezoid.h"
#include <cmath>
#include "tallocator.h"
Trapezoid::Trapezoid(): v1(0,0),v2(0,0),v3(0,0),v4(0,0){
  //std::cout << "Default trapezoid created" << std::endl;
}
Trapezoid::Trapezoid(Point v_1,Point v_2, Point v_3, Point v_4, ):
    v1(v_1), v2(v_2), v3(v_3), v4(v_4)
{
  //std::cout << "Trapezoid created" << std::endl;
}
Trapezoid::Trapezoid(Trapezoid& other):
   Trapezoid(other.v1,other.v2,other.v3,other.v4)
{
  //std::cout << "Made copy of trapezoid";
}
Trapezoid::Trapezoid(std::istream &is) {
  is >> v1 >> v2 >> v3 >> v4;
  //std::cout << "Trapezoid created via istream" << std::endl;
}
void Trapezoid::Print(std::ostream& os) {
  os << "Trapezoid:" << v1 << v2 << v3 << v4"\n";
}
Trapezoid::~Trapezoid() {
  //std::cout << "Object Trapezoid ";
  //Print(std::cout);
  //std::cout << "deleted" << std::endl;
}
double Trapezoid::Area() {
  Point ar[4];
  ar[0] = v1;
  ar[1] = v2;
  ar[2] = v3;
  ar[3] = v4;
  double res = 0;
  for (unsigned i = 0; i < 4; i++) {
    Point p = i ? ar[i-1] : ar[4];
    Point q = ar[i];
    res += (getx(p) - getx(q)) * (gety(p) + gety(q));
  }
  return fabs(res) / 2;
}
size_t Trapezoid::VertexesNumber() {
  return 4;
}
TAllocator Trapezoid::allocator(sizeof(Trapezoid), 20);
void* Trapezoid::operator new(size_t size) {
  return allocator.allocate(size);
}
void Trapezoid::operator delete(void *ptr) {
  allocator.deallocate(ptr);
}
std::ostream &operator<<(std::ostream &os, const Trapezoid &figure)
{
  os << "Trapezoid: " << figure.v1 << " " << figure.v2 << " " << figure.v3 << " " << figure.v4;
  return os;
}