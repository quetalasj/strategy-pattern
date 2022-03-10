//
// Created by quetalasj on 10.03.2022.
//

#include "ModelDuck.h"
#include "iostream"
#include "FlyNoWay.h"
#include "Quack.h"
#include "memory"

using namespace std;

ModelDuck::ModelDuck() {
    flyBehaviour = make_shared<FlyNoWay>();
    quackBehaviour = make_shared<Quack>();

}

void ModelDuck::display() {
    cout << "I'm a model duck" << endl;
}
