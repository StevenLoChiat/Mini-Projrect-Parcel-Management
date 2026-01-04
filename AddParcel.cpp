#include <iostream>
#include "header.hpp"
#include <limits>

using namespace std;

void addParcel(vector<Parcel>& parcels) {
    Parcel p;

    cout << "Enter Parcel ID: ";
    getline(cin, p.id);

    // Optional: check duplicate ID
    for (const auto& parcel : parcels) {
        if (parcel.id == p.id) {
            cout << "Parcel ID already exists!" << endl;
            return;
        }
    }

    cout << "Enter Sender Name: ";
    getline(cin, p.sender);

    cout << "Enter Receiver Name: ";
    getline(cin, p.receiver);

    cout << "Enter Weight (kg): ";
    cin >> p.weight;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Status (Pending / Delivered / In Transit): ";
    getline(cin, p.status);

    parcels.push_back(p);

    cout << "Parcel added successfully!" << endl;
}