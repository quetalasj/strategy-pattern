//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_QUACK_H
#define STRATEGY_PATTERN_QUACK_H
#include "QuackBehaviour.h"

class Quack: public QuackBehaviour {
public:
    void quack() const override;
};
#endif //STRATEGY_PATTERN_QUACK_H
