#pragma once

#include "iFlyBehavior.h"

class FlyWithWings : public iFlyBehavior
{
public:
  void fly() override;
};