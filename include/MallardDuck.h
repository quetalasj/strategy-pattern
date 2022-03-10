//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_MALLARDDUCK_H
#define STRATEGY_PATTERN_MALLARDDUCK_H
#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include "FlyBehaviour.h"
#include "QuackBehaviour.h"

class MallardDuck:public Duck{
public:
    MallardDuck();
    void display() override;
};
#endif //STRATEGY_PATTERN_MALLARDDUCK_H
