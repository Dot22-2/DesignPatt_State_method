#pragma once
#include "IState.hpp"

class StateA : public IState {
public:
    void handle(Context* ctx) override;
};
