//
// Created by martinc on 1/27/25.
//

#include "StateService.hpp"

void StateService::update() {
    this->state->onEnter();
}

void StateService::setState(StateInterface *state) {
  this->state = state;
  this->update();
}