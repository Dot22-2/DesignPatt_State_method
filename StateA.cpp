#include "StateA.hpp"
#include "StateB.hpp"
#include "Context.hpp"
#include <iostream>

void StateA::handle(Context* ctx) {
    std::cout << "[StateA] -> switching to StateB\n";
    ctx->setState(new StateB());
}
