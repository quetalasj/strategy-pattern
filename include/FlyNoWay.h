//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_FLYNOWAY_H
#define STRATEGY_PATTERN_FLYNOWAY_H
#include "FlyBehaviour.h"
class FlyNoWay: public FlyBehaviour {
    void fly() const override;
};
#endif //STRATEGY_PATTERN_FLYNOWAY_H
