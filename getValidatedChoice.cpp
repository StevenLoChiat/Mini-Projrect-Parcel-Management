//Programmer    : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : To validate user menu input and return a valid choice (1–6)


#include <iostream>
#include "header.hpp"
#include <limits>
using namespace std;

int getValidatedChoice() {
    int choice;

    while (true) {
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
        }
        else if (choice < 1 || choice > 6) {
            cout << "Choice out of range. Please enter 1 to 6: ";
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return choice;
        }
    }
}