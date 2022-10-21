#pragma once

#include "Dragon.h" // Includes the Dragon header file

class IceDragon : public Dragon { // Declares the IceDragon constructor, derived from Dragon
public: // Initializes available methods for all IceDragon types
    IceDragon(const string &name, const string &_image);

    bool canBreatheFire();
};