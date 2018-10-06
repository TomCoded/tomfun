// -*- C++ -*-
#ifndef SINFUNNODE_H_
#define SINFUNNODE_H_

#include <FunNode.h>

class SinFunNode : public FunNode
{
 public:
  SinFunNode();
  SinFunNode(FunNode * childNode);
  SinFunNode(SinFunNode &other);
  SinFunNode * clone();
  ~SinFunNode();

  double eval(double t);
  double eval(int day, Stock *s);

  std::ostream& out(std::ostream&);
  
 protected:
  FunNode * childNode;
};

#endif
