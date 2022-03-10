//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_MUTEQUACK_H
#define STRATEGY_PATTERN_MUTEQUACK_H
#include "QuackBehaviour.h"

class MuteQuack: QuackBehaviour {
public:
    virtual void quack() const;
};
#endif //STRATEGY_PATTERN_MUTEQUACK_H
