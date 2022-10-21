#pragma once

#include "Cow.h" // Includes the Cow header file

using namespace std;

class Dragon : public Cow { // Declares the Dragon class, derived from Cow
public: // Initializes available methods for Dragon Class
    Dragon(const string &_name, const string &_image);
    virtual bool canBreatheFire();
};