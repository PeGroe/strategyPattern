#include "ModelDuck.h"
#include <iostream>
#include "../DuckBehavior/Quacking/Quack.h"
#include "../DuckBehavior/Flying/FlyNoWay.h"

ModelDuck::ModelDuck()
{
  quackBehavior = new Quack();
  flyBehavior   = new FlyNoWay();
}

ModelDuck::~ModelDuck()
{
}

void ModelDuck::display()
{
  std::cout << "I'm a model duck!" << std::endl;
}