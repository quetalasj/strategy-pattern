#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H

#include "FlyBehaviour.h"
#include "QuackBehaviour.h"
#include "memory"

using namespace std;

class Duck {
public:
    shared_ptr<FlyBehaviour> flyBehaviour;
    shared_ptr<QuackBehaviour> quackBehaviour;
    virtual void display() {};
    void performFly() const;
    void performQuack() const;
    void swim();
    void setFlyBehaviour(const shared_ptr<FlyBehaviour> &fb);
    void setQuackBehaviour(const shared_ptr<QuackBehaviour> &qb);
};

#endif //STRATEGY_PATTERN_DUCK_H
