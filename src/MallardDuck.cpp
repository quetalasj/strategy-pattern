//
// Created by quetalasj on 10.03.2022.
//

#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include "memory"
#include "iostream"

using namespace std;

MallardDuck::MallardDuck() {
    quackBehaviour = make_shared<Quack>();
    flyBehaviour = make_shared<FlyWithWings>();
}

void MallardDuck::display() {
    cout << "I'm a real Mallard duck" << endl;
}