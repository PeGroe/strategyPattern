#pragma once

#include "iQuackBehavior.h"

class Quack : public iQuackBehavior
{
public:
  void quack() override;
};