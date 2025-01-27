//
// Created by martinc on 1/27/25.
//

#ifndef STATESERVICE_HPP
    #define STATESERVICE_HPP

#include "../interface/StateInterface.hpp"
#include "../state/DefaultState.hpp"

class StateService {
    private:
        StateInterface *state;

    public:
      StateService() : state(new DefaultState()) {}

      void update();
      void setState(StateInterface *newState);

};

#endif //STATESERVICE_HPP
