#pragma once

#include "iQuackBehavior.h"

class Squeak : public iQuackBehavior
{
public:
  void quack() override;
};