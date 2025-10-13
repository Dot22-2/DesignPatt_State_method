#include "StateA.hpp"
#include "Context.hpp"

int main() {
    Context ctx(new StateA());

    ctx.request();
    ctx.request();

    return 0;
}
