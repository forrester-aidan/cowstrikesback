#include "Cow.h" // Includes the Cow header file

Cow::Cow(const string& _name) {  // Defines the Cow constructor
    this->name = _name;
    this->image = "";
}

string &Cow::getName() {  // Returns the name of the Cow
    return name;
}

string &Cow::getImage() {  // Returns the image associated with the Cow
    return image;
}

void Cow::setImage(const string &_image) {  // Changes the image of the Cow
    this->image = _image;
}
