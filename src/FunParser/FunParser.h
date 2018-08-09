#ifndef FUNPARSER_H_
#define FUNPARSER_H_

#include <FunNode.h>
#include <NumFunNode.h>
#include <VarFunNode.h>
#include <SumFunNode.h>
#include <MultFunNode.h>
#include <DivFunNode.h>
#include <PowFunNode.h>
#include <SinFunNode.h>
#include <CosFunNode.h>
#include <string>

class FunParser
{
 public:

  FunParser();
  ~FunParser();

  FunNode * parseString(std::string szFunction);

  std::istream& in(std::istream&);
  std::ostream& out(std::ostream&) const;

 protected:
};

std::istream& operator>>(std::istream &is, FunParser& f);

std::ostream& operator<<(std::istream &o, const FunParser& f);

#endif
