#include "Duck.h"
#include "iostream"

using namespace std;

void Duck::performFly() const{
    flyBehaviour->fly();
}

void Duck::performQuack() const{
    quackBehaviour->quack();
}

void Duck::swim() {
    cout << "All ducks float, even decoys!" << endl;
}
