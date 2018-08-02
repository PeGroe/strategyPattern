#pragma once

#include "../DuckBehavior/Flying/iFlyBehavior.h"
#include "../DuckBehavior/Quacking/iQuackBehavior.h"

class Duck
{
public:
  Duck();
  virtual ~Duck();

  virtual void display();
  virtual void performFly();
  virtual void performQuack();
  virtual void swim();
  
  virtual void setFlyBehavior(iFlyBehavior* fb);
  virtual void setQuackBehavior(iQuackBehavior* qb);

protected:
  iFlyBehavior*   flyBehavior;
  iQuackBehavior* quackBehavior;
};