// SimUDuck.cpp : Defines the entry point for the console application.
//

#include "../Ducks/MallardDuck.h"
#include "../Ducks/ModelDuck.h"

#include "../DuckBehavior/Flying/FlyRocketPowered.h"


int main()
{
  Duck* mallard = new MallardDuck();
  mallard->performQuack();
  mallard->performFly();

  Duck* model = new ModelDuck();
  model->performFly();
  model->setFlyBehavior(new FlyRocketPowered());
  model->performFly();

  return 0;
}

