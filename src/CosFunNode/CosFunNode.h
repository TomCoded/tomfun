#ifndef COSFUNNODE_H_
#define COSFUNNODE_H_

#include <FunNode.h>

class CosFunNode : public FunNode
{
 public:
  CosFunNode();
  CosFunNode(FunNode * childNode);
  CosFunNode(CosFunNode &other);
  CosFunNode * clone();
  ~CosFunNode();

  double eval(double t);
  double eval(int day, Stock *s);

  std::ostream& out(std::ostream&);

 protected:
  FunNode * childNode;
};

#endif
