// -*- C++ -*-
#ifndef VARFUNNODE_H_
#define VARFUNNODE_H_

#include <FunNode.h>

class VarFunNode : public FunNode
{
 public:
  VarFunNode();
  VarFunNode * clone();
  VarFunNode(VarFunNode &other);
  ~VarFunNode();

  std::ostream& out(std::ostream&);

  double eval(double t);
  double eval(int date, Stock*s);
 protected:
};

#endif
