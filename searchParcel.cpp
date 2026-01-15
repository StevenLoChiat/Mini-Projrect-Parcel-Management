//Programmer    : MUHAMMAD AMIRUL HAZIQ BIN MAHADZIR
//Matric No.    : 24303532
//Function      : To search for a parcel by ID


#include <iostream>
#include "header.hpp"

using namespace std;

void searchParcel(const vector<Parcel>& parcels) {
    string searchID;
    bool found = false;

    cout << "Enter Parcel ID to search: ";
    getline(cin, searchID);

    for (const auto& p : parcels) {
        if (p.id == searchID) {
            cout << " " << endl;
            cout << "========================================" << endl;
            cout << "Parcel ID   : " << p.id << endl;
            cout << "Sender      : " << p.sender << endl;
            cout << "Receiver    : " << p.receiver << endl;
            cout << "Weight (kg) : " << p.weight << endl;
            cout << "Status      : " << p.status << endl;
            cout << "========================================" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Parcel not found!" << endl;
    }
}