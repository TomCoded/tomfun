// -*- C++ -*-
#ifndef MULTFUNNODE_H_
#define MULTFUNNODE_H_

#include <FunNode.h>

class MultFunNode : public FunNode
{
 public:
  MultFunNode();
  MultFunNode(FunNode * leftNode, FunNode * rightNode);
  MultFunNode(MultFunNode &other);
  MultFunNode * clone();
  ~MultFunNode();

  std::ostream& out(std::ostream&);

  double eval(double t);
  double eval(int date, Stock *stock);
 protected:
  FunNode * leftNode;
  FunNode * rightNode;
};

#endif
