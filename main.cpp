//coder         : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : Main program for managing parcels

#include <iostream>
#include "header.hpp"

int main() {
    vector<Parcel> parcels;
    loadData(parcels);

    int choice;
    do {
        showMenu();
        choice = getValidatedChoice();

        switch (choice) {
            case 1: addParcel(parcels); break;
            case 2: editParcel(parcels); break;
            case 3: deleteParcel(parcels); break;
            case 4: searchParcel(parcels); break;
            case 5: displayAllParcels(parcels); break;
            case 6: saveData(parcels); break;
        }
    } while (choice != 6);

    return 0;
}