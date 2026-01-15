//Programmer    : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : Main program for managing parcels


#include <iostream>
#include "header.hpp"
#include <vector>
using namespace std;

int main() {
    vector<Parcel> parcels;
    loadData(parcels);

    cout << "WELCOME TO THE PARCEL MANAGEMENT SYSTEM!" << endl;
    
    int choice;
    do {
        showMenu();

        choice = getValidatedChoice();

        handleMenuChoice(choice, parcels);
        
    } while (choice != 6);

    return 0;
}