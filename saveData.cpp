#include <iostream>
#include "header.hpp"
#include <fstream>


using namespace std;

void saveData(const vector<Parcel>& parcels) {
    ofstream file("parcels.txt");

    if (!file) {
        cout << "Error opening file for saving!" << endl;
        return;
    }

        file << "ParcelID,Sender,Receiver,Weight,Status" << endl;

        
    for (const auto& p : parcels) {
        file << p.id << ","
             << p.sender << ","
             << p.receiver << ","
             << p.weight << ","
             << p.status << endl;
    }

    file.close();
}
