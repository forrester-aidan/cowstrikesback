#include "Dragon.h" // Includes the Dragon header file
using namespace std;

Dragon::Dragon(const string& _name, const string& _image) : Cow(name) { // Defines the Dragon constructor
    this->name = _name;
    this->image = _image;
}

bool Dragon::canBreatheFire() { // Returns true for all Dragon types
    return true;
}
