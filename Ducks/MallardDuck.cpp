#include "MallardDuck.h"
#include <iostream>
#include "../DuckBehavior/Quacking/Quack.h"
#include "../DuckBehavior/Flying/FlyWithWings.h"

MallardDuck::MallardDuck()
{
  quackBehavior = new Quack();
  flyBehavior   = new FlyWithWings();
}

MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
  std::cout << "I'm a real Mallard duck!" << std::endl;
}