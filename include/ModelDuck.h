//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_MODELDUCK_H
#define STRATEGY_PATTERN_MODELDUCK_H
#include "Duck.h"
class ModelDuck: public Duck {
public:
    ModelDuck();
    void display() override;
};
#endif //STRATEGY_PATTERN_MODELDUCK_H
