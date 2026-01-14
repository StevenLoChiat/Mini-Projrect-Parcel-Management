//Programmer    : BEH MING YANG
//Matric No.    : 24303532
//Function      : To edit an existing parcel in the system
// Note: Originally assigned to MUHAMMAD AZFAR BINZULKIFLI, but completed by BEH MING YANG due to time constraints

#include <iostream>
#include "header.hpp"

using namespace std;

void editParcel(vector<Parcel>& parcels) {
    if (parcels.empty()) {
        cout << "\n[!] No parcels available to edit.\n";
        return;
    }

    string targetID;
    cout << "Enter Parcel ID to edit: ";
    getline(cin, targetID);

    for (auto& p : parcels) {
        if (p.id == targetID) {

            cout << "Current Receiver Name: " << p.receiver << endl;
            cout << "Enter new Receiver Name: ";
            getline(cin, p.receiver);

            cout << "Current Status: " << p.status << endl;
            cout << "Enter new Status (Pending / Delivered / In Transit): ";
            getline(cin, p.status);

            if (!isValidStatus(p.status)) {
                cout << "Invalid status entered! Edit cancelled." << endl;
                return;
            }

            cout << "Parcel information updated successfully!!!" << endl;
            return;
        }
    }

    cout << "Parcel ID not found!" << endl;
}
