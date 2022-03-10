//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_SQUEACK_H
#define STRATEGY_PATTERN_SQUEACK_H
#include "QuackBehaviour.h"
class Squeack: public QuackBehaviour {
public:
    void quack() const override;
};
#endif //STRATEGY_PATTERN_SQUEACK_H
