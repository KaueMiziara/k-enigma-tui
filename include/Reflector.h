#pragma once

#include "EnigmaComponent.h"

class Reflector : public EnigmaComponent
{
private:
    std::string wiringInput();

public:
    Reflector();
    
    Reflector(char position);
};
