//Programmer    : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : Handle menu choices for managing parcels


#include <iostream>
#include <unistd.h>
#include "header.hpp"
using namespace std;

void handleMenuChoice(int choice, vector<Parcel>& parcels) {

    switch (choice) {
        case 1:
            addParcel(parcels);
            break;
        case 2:
            editParcel(parcels);
            break;
        case 3:
            deleteParcel(parcels);
            break;
        case 4:
            searchParcel(parcels);
            break;
        case 5:
            displayAllParcels(parcels);
            break;
        case 6:
            saveData(parcels);
            cout << "Data saved. Exiting the program." << endl;
            sleep(3);
            break;
        default:
            break;
    }
}