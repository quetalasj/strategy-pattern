cmake_minimum_required(VERSION 3.21)
project(strategy_pattern)

set(CMAKE_CXX_STANDARD 20)

include_directories("include")
add_executable(strategy_pattern main.cpp include/Duck.h src/Duck.cpp include/FlyBehaviour.h include/FlyWithWings.h src/FlyWithWings.cpp include/FlyNoWay.h src/FlyNoWay.cpp include/QuackBehaviour.h include/Quack.h src/Quack.cpp include/MuteQuack.h src/MuteQuack.cpp include/Squeack.h src/Squeak.cpp include/MallardDuck.h src/MallardDuck.cpp)
