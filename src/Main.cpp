
#include "service/StateService.hpp"

int main() {

    StateService stateService;

    stateService.setState(new DefaultState());
    return 0;
}
