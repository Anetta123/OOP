#include <iostream>
#include "trapezoid.h"
#include "tnarytree.h"
int main() {
  TNaryTree<Trapezoid> t(3);

  std::shared_ptr<Trapezoid> p1(new Trapezoid({0, 0}, {0, 2}, {1, 3}, {2, 3}, {3, 0}));
  std::shared_ptr<Trapezoid> p2(new Trapezoid({0, 0}, {0, 3}, {1, 3}, {2, 3}, {3, 0}));
  std::shared_ptr<Trapezoid> p3(new Trapezoid({0, 0}, {0, 4}, {1, 3}, {2, 3}, {3, 0}));
  std::shared_ptr<Trapezoid> p4(new Trapezoid({0, 0}, {0, 5}, {1, 3}, {2, 3}, {3, 0}));
  std::shared_ptr<Trapezoid> p5(new Trapezoid({0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}));

  t.Update(p1,"");
  t.Update(p2,"a");
  t.Update(p3,"ab");
  t.Update(p4,"abb");
  t.Update(p5,"aa");
  std::cout << t << std::endl;

  std::shared_ptr<Node<Trapezoid>> r = t.getroot();

  TIterator<Node<Trapezoid>, Trapezoid> iter1(r);

  std::cout << "Iterator work:" << std::endl;
  std::cout << *iter1 << std::endl;
  iter1.to_son();
  std::cout << *iter1 << std::endl;
  iter1.to_brother();
  std::cout << *iter1 << std::endl;

  TIterator<Node<Trapezoid>, Trapezoid> iter2(r);
  iter2.to_son();

  return 0;
}
