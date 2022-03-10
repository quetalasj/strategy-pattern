#include <iostream>
#include "MallardDuck.h"
#include "memory"

using namespace std;

class MiniDuckSimulator {
public:
    static void main() {
        shared_ptr<Duck> mallard = make_shared<MallardDuck>();
        mallard->performQuack();
        mallard->performFly();
    }
};
int main() {
    MiniDuckSimulator simulator;
    simulator.main();
    return 0;
}
