#pragma once

#include "Duck.h"

class MallardDuck : public Duck
{
public:
  MallardDuck();
  virtual ~MallardDuck();

  void display() override;
};