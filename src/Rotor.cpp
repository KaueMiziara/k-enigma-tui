#include <string>

#include "../include/Rotor.h"

Rotor::Rotor(std::string wiring, char notch) {
    this->componentWiring = wiring;
    this->rotorNotch = notch;
}
