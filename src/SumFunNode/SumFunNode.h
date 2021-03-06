// -*- C++ -*-
#ifndef SUMFUNNODE_H_
#define SUMFUNNODE_H_

#include <FunNode.h>

class SumFunNode : public FunNode
{
 public:
  SumFunNode();
  SumFunNode(FunNode * leftNode, FunNode * rightNode);
  SumFunNode(SumFunNode &other);
  FunNode * clone();
  ~SumFunNode();

  double eval(double t);
  double eval(int date, Stock *stock);

  std::ostream& out(std::ostream&);

 protected:
  FunNode * leftNode;
  FunNode * rightNode;
};

#endif
