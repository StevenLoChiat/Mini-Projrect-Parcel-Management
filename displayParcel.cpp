//Programmer    : YAP CHUN KEAT
//Matric No.    : 24300915
//Function      : To display all parcel information in a formatted table


#include <iostream>
#include "header.hpp"
#include <iomanip>

using namespace std;
void displayAllParcels(const vector<Parcel>& parcels) {
    if (parcels.empty()) {
        cout << "\n[!] No parcels currently in the system.\n";
        return;
    }

    cout << "\n" << string(65, '=') << endl;
    cout << left << setw(10) << "ID" 
         << setw(15) << "Sender" 
         << setw(15) << "Receiver" 
         << setw(10) << "Weight" 
         << "Status" << endl;
    cout << string(65, '-') << endl;

    for (const auto& p : parcels) {
        cout << left << setw(10) << p.id 
             << setw(15) << p.sender 
             << setw(15) << p.receiver 
             << setw(10) << p.weight 
             << p.status << endl;
    }
    cout << string(65, '=') << endl;
}