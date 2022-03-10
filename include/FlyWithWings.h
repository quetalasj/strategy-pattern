//
// Created by quetalasj on 10.03.2022.
//

#ifndef STRATEGY_PATTERN_FLYWITHWINGS_H
#define STRATEGY_PATTERN_FLYWITHWINGS_H
#include "FlyBehaviour.h"

class FlyWithWings: public FlyBehaviour {
    void fly() const override;
};
#endif //STRATEGY_PATTERN_FLYWITHWINGS_H
