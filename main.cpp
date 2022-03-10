#include <iostream>
#include "MallardDuck.h"
#include "memory"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

using namespace std;

class MiniDuckSimulator {
public:
    static void main() {
        shared_ptr<Duck> mallard = make_shared<MallardDuck>();
        mallard->performQuack();
        mallard->performFly();

        shared_ptr<Duck> model = make_shared<ModelDuck>();
        model->performFly();
        model->setFlyBehaviour(make_shared<FlyRocketPowered>());
        model->performFly();
    }
};
int main() {
    MiniDuckSimulator simulator;
    simulator.main();
    return 0;
}
