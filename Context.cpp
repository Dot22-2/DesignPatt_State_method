#include "Context.hpp"

Context::Context(IState* initial) : state(initial) {}

Context::~Context() {
    delete state;
}

void Context::setState(IState* newState) {
    delete state;
    state = newState;
}

void Context::request() {
    if (state)
        state->handle(this);
}
