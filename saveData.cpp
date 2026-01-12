//MUHAMMAD AZFAR BIN ZULKIFLI
#include <iostream>
#include "header.hpp"

using namespace std;

void saveData(const vector<Parcel>& parcels)
{
    int exit;
    cout << "Are you sure you want to exit the programme?(Y/N) :";
    cin >> exit;
    if (exit == 'Y')
    {

    }
    if (exit == 'N')
    {
        showMenu();
    }
    else
    {
        cout << "Invalid input";
    }
}