//Programmer    : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : To load parcel information from a text file


#include <iostream>
#include "header.hpp"
#include <fstream>
#include <sstream>

using namespace std;

void loadData(vector<Parcel>& parcels) {
    ifstream file("parcels.txt");
    if (!file) return;

    Parcel p;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);

        getline(ss, p.id, ',');
        getline(ss, p.sender, ',');
        getline(ss, p.receiver, ',');

        ss >> p.weight;
        ss.ignore();

        getline(ss, p.status);

        parcels.push_back(p);
    }
}