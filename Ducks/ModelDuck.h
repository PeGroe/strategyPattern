#pragma once

#include "Duck.h"

class ModelDuck : public Duck
{
public:
  ModelDuck();
  virtual ~ModelDuck();

  void display() override;
};