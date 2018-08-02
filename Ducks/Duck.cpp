#include "Duck.h"
#include <iostream>

Duck::Duck()
{
}

Duck::~Duck()
{
}

void Duck::display()
{
}

void Duck::performFly()
{
  flyBehavior->fly();
}

void Duck::performQuack()
{
  quackBehavior->quack();
}

void Duck::swim()
{
  std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::setFlyBehavior(iFlyBehavior * fb)
{
  flyBehavior = fb;
}

void Duck::setQuackBehavior(iQuackBehavior * qb)
{
  quackBehavior = qb;
}
