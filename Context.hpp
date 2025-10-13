#pragma once
#include "IState.hpp"

class Context {
private:
    IState* state;

public:
    Context(IState* initial);
    ~Context();
    void setState(IState* newState);
    void request();
};
