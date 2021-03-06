// testTransform4Dd.C

// (C) 2002 Anonymous1

#include "Transform4Dd/Transform4Dd.h"
#include "Point4Dd/Point4Dd.h"

void print(const char * string, const Point4Dd& p)
{
  std::cout << string << " = " << p <<std::endl;
}

void print(const char * string, const Transform4Dd& t)
{
  std::cout << string << " = " << t <<std::endl;
}

int main(void) {

  Point4Dd p1(1,2,3,4), p2(4,5,6,8);
  Transform4Dd t1, t2(p1,p2,Point4Dd(1,1,1,1),Point4Dd(0,0,0,1));

  print("p1 ",p1);
  print("p2 ",p2);

  print("t1 ",t1);
  print("t2 ",t2);

  t1 = t1 + t2;
  print("t1 = t1 + t2; t1 ",t1);

  print("t1*=t2; t1 ",t1*=t2);

  Transform4Dd t;
  print("t ",t);

  std::cout << "Enter a transform: ";
  std::cin >> t;
  print("t ",t);

  t = (t1 * 3) - (t2 * 2);
  print("t = (t1 * 3) - (t2 * 2); t ",t);

  print("t - t2",t-t2);

  print("t1*p2 ", t1*p2);

  print("t2 ",t2);

  print("transpose(t2) ",t2.transpose());
  print("transpose(t2) ",t2.transposeSelf());
}
