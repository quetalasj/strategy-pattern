//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_FLYROCKETPOWERED_H
#define STRATEGY_PATTERN_FLYROCKETPOWERED_H
#include "FlyBehaviour.h"
class FlyRocketPowered: public FlyBehaviour {
public:
    void fly() const override;
};
#endif //STRATEGY_PATTERN_FLYROCKETPOWERED_H
