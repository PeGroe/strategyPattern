#pragma once

#include "iFlyBehavior.h"

class FlyNoWay : public iFlyBehavior
{
public:
  void fly() override;
};