#pragma once
#include "IState.hpp"

class StateB : public IState {
public:
    void handle(Context* ctx) override;
};
