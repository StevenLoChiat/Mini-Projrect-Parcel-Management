//Programmer    : YAP CHUN KEAT
//Matric No.    : 24300915
//Function      : To delete a parcel from the system


#include <iostream>
#include "header.hpp"

using namespace std;

void deleteParcel(vector<Parcel>& parcels) {
    if (parcels.empty()) {
        cout << "\n[!] System is empty. Nothing to delete.\n";
        return;
    }

    string targetID;
    cout << "Enter the ID of the parcel to delete: ";
    cin >> targetID;

    bool found = false;
    // Iterate using an iterator to allow for erasing
    for (auto it = parcels.begin(); it != parcels.end(); ++it) {
        if (it->id == targetID) {
            parcels.erase(it);
            cout << "\n[Success] Parcel " << targetID << " has been removed.\n";
            found = true;
            break; // Stop looking once found
        }
    }

    if (!found) {
        cout << "\n[Error] Parcel ID '" << targetID << "' not found.\n";
    }
}