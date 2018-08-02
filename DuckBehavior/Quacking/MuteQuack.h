#pragma once

#include "iQuackBehavior.h"

class MuteQuack : public iQuackBehavior
{
public:
  void quack() override;
};