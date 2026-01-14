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


   
    for (const auto& p : parcels) {
        if (p.id.empty()) continue; 
        file << p.id << ","
             << p.sender << ","
             << p.receiver << ","
             << p.weight << ","
             << p.status << endl;
    }

    file.close();
}
