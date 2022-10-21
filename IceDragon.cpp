#include "IceDragon.h" // Includes IceDragon header file

using namespace std;

IceDragon::IceDragon(const string& _name, const string& _image) : Dragon(name, image) { // Defines the IceDragon constructor
    this->name = _name;
    this->image = _image;
}

bool IceDragon::canBreatheFire() { // Returns false for all IceDragon types
    return false;
}
