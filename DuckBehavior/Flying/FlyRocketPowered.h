#pragma once

#include "iFlyBehavior.h"

class FlyRocketPowered : public iFlyBehavior
{
public:
  void fly() override;
};