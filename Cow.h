#pragma once

#include <string> // Includes the string module
#include <vector> // Includes the vector module
using namespace std;

class Cow { // Declares the Cow Class
protected: // Declares name and image variables
    string name;
    string image;
public: // Declares the available methods for the Cow class
    Cow(const string& _name);
    string& getName();
    string& getImage();
    virtual void setImage(const string& _image);
};