// -*- C++ -*-
#ifndef POWFUNNODE_H_
#define POWFUNNODE_H_

#include <FunNode.h>

class PowFunNode : public FunNode
{
 public:
  PowFunNode();
  PowFunNode(FunNode * leftNode, FunNode * rightNode);
  PowFunNode(PowFunNode &other);
  ~PowFunNode();

  double eval(double t);
  double eval(int day, Stock *s);

  std::ostream& out(std::ostream&);

 protected:
  FunNode * leftNode;
  FunNode * rightNode;
};

#endif
