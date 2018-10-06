#ifndef FUNNODE_H_
#define FUNNODE_H_

#include <FunDefs.h>
#include <iostream>
#include <string>
class Stock;



class FunNode
{
 public:
  FunNode();
  FunNode(FunNode &other);
  ~FunNode();

  virtual FunNode * clone(void) {};
  static FunNode * parseString(std::string szFunction);

  //assignment operator
  FunNode * operator=(FunNode& other);
  
  //add, sub, multiply, divide
  FunNode * operator +(FunNode*);
  FunNode * operator -(FunNode*);
  FunNode * operator *(FunNode*);
  FunNode * operator /(FunNode*);
  
  FunNode * operator +(const double scalar);
  FunNode * operator -(const double scalar);
  FunNode * operator *(const double scalar);
  FunNode * operator /(const double scalar);

  virtual double eval(double t)=0;
  virtual double eval(int date, Stock *stock)=0;
  
  FunNode * in(std::istream& is);
  virtual std::ostream& out(std::ostream&);

 protected:
};

std::istream& operator>>(std::istream& is, FunNode&);
std::ostream& operator<<(std::ostream& o, FunNode&);

#endif
