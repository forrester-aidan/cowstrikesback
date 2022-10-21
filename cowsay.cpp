#include <iostream>  // Includes the stream module
#include "Cow.h"  // Includes the Cow header file
#include "HeiferGenerator.h"  // Includes teh HeiferGenerator header file

int main(int argc, const char** argv) {  // Main method, begins the program
    vector<Cow*>& cows = HeiferGenerator::getCows();  // Initialized variables and objects
    Cow printedCow = Cow("heifer");
    Dragon printedDragon = Dragon("dragon", cows[2]->getImage());
    Dragon printedIceDragon = IceDragon("ice-dragon", cows[3]->getImage());
    printedCow.getImage() = cows[0]->getImage();
    string nameOfCow = "heifer";
    string message;

    for (int x = 0; x < argc; x++) {  // Loops through the list of arguments
        if (argc == 1) { // Checks if the there are no viable arguments
            exit(0);
        } else if (x == 0) { // File does not mean anything
            continue;
        } else if (x == 1 && (string)argv[x] == "-l") {  // Checks if we want to list the amount of files
                string availableCows;
                for(int y = 0; y < cows.size(); y++) {
                    string cowName = cows[y]->getName();
                    if (y + 1 == cows.size()) {
                        availableCows += cowName;
                    } else {
                        cowName += " ";
                        availableCows += cowName;
                    }

                }

                cout << "Cows available: " << availableCows << endl;  // Prints the cows available
                cout << " " << endl;
                exit(0);
            } else if (x == 1 && (string)argv[x] == "-n") {  // Checks if we want to change the type of Cow
                if ((string)argv[x + 1] != "heifer" and (string)argv[x + 1] != "kitteh" and (string)argv[x + 1] != "dragon" and (string)argv[x + 1] != "ice-dragon") {
                    cout << "Could not find " << argv[x + 1] << " cow!" << endl;
                    cout << " " << endl;
                    exit(0);
                } else {  // Changes the images based on type of Cow
                    if ((string) argv[x + 1] == "kitteh") {
                        nameOfCow = "kitteh";
                        printedCow.setImage(cows[1]->getImage());
                    } else if ((string) argv[x + 1] == "dragon") {
                        nameOfCow = "dragon";
                        printedDragon.setImage(cows[2]->getImage());
                    } else if (((string) argv[x + 1] == "ice-dragon")) {
                        nameOfCow = "ice-dragon";
                        printedIceDragon.setImage(cows[3]->getImage());
                    }
                }
        } else { // Checks for the message
            if (x - 1 == 1 and (string) argv[x - 1] == "-n") {
                continue;
            } else {
                if (x + 1 == argc) {
                    message += argv[x];
                } else {
                    message += argv[x];
                    message += " ";
                }
            }
        }
    }

    // Prints the message, the image of the type of Cow, and if its a dragon, prints whether it can breathe fire or not

    cout << " " << endl;
    cout << message << endl;
    if (printedDragon.canBreatheFire() and nameOfCow == "dragon") {
        cout << printedDragon.getImage() << endl;
        cout << "This dragon can breathe fire." << endl;
        cout << " " << endl;
    } else if (nameOfCow == "ice-dragon") {
        cout << printedIceDragon.getImage() << endl;
        cout << "This dragon cannot breathe fire." << endl;
        cout << " " << endl;
    } else {
        cout << printedCow.getImage() << endl;
    }

    return 0; // Main method return function
}