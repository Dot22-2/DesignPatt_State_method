#include "StateB.hpp"
#include "StateA.hpp"
#include "Context.hpp"
#include <iostream>

void StateB::handle(Context* ctx) {
    std::cout << "[StateB] -> switching to StateA\n";
    ctx->setState(new StateA());
}
