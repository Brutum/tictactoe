#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include "Game.hpp"

class Display {
public:
    virtual void display(Game game) = 0;
};

#endif