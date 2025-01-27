//
// Created by martinc on 1/27/25.
//

#ifndef DEFAULTSTATE_HPP
    #define DEFAULTSTATE_HPP

#include <iostream>
#include "../interface/StateInterface.hpp"

class DefaultState : public StateInterface {
  public:
    void onEnter() override;

};

#endif //DEFAULTSTATE_HPP
