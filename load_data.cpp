#include <iostream>
#include "header.hpp"
#include <fstream>
#include <sstream>
using namespace std;

void loadData(vector<Parcel>& parcels) {
    ifstream file("parcels.txt");

    if (!file) {
        // File does not exist yet
        return;
    }

    Parcel p;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, p.id, ',');
        getline(ss, p.sender, ',');
        getline(ss, p.receiver, ',');
        getline(ss, p.status);

        parcels.push_back(p);
    }

    file.close();
}