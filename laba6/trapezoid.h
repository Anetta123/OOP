#ifndef LAB6__TRAPEZOID_H_
#define LAB6__TRAPEZOID_H_
#include "figure.h"
#include "point.h"
#include <iostream>
#include "tallocator.h"

class Trapezoid : public Figure {
 public:
  Trapezoid();
  Trapezoid(Point v1,Point v2,Point v3,Point v4);
  explicit Trapezoid(std::istream &is);
  Trapezoid(Trapezoid &other);

  void Print(std::ostream& os) override;
  double Area() override;
  size_t VertexesNumber() override;

  friend std::ostream &operator<<(std::ostream &os, const Trapezoid &figure);

  void* operator new(size_t size);
  void operator delete(void* ptr);

  ~Trapezoid();
 private:
  static TAllocator allocator;
  Point v1,v2,v3,v4;
};
#endif //LAB6__TRAPEZOID_H_