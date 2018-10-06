// -*- C++ -*-
#ifndef NUMFUNNODE_H_
#define NUMFUNNODE_H_

#include <FunNode.h>

class NumFunNode : public FunNode
{
 public:
  NumFunNode();
  NumFunNode(double myVal);
  NumFunNode(NumFunNode &other);
  NumFunNode * clone();
  ~NumFunNode();

  double eval(double t);
  double eval(int date, Stock *s);

  std::ostream& out(std::ostream&);

 protected:
  double myVal;
};

#endif
