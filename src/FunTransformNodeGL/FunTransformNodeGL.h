// -*- C++ -*-
#ifndef FUNTRANSFORMNODEGL_H_
#define FUNTRANSFORMNODEGL_H_

#include <Point3Df.h>
#include <Transform4Dd.h>
#include <NodeGL/NodeGL.h>

class FunTransformNodeGL : public NodeGL
{
 public:
  FunTransformNodeGL();
  FunTransformNodeGL(FunTransformNodeGL&);

  ~FunTransformNodeGL();

  std::ostream& out(std::ostream& o) const;
  std::istream& in(std::istream& is);

  void ActionGL();

 protected:
  //array of functions, in column-major order
  FunNode ** myFuns;

  double tWrap;
  double dt;
  double t;
};

std::istream& operator>>(std::istream &is, FunTransformNodeGL& m);

std::ostream& operator<<(std::ostream &o, const FunTransformNodeGL& m);

#endif

