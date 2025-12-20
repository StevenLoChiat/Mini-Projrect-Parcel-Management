//coder         : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : Header file for parcel management system


#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Parcel {
    string id;
    string sender;
    string receiver;
    double weight;
    string status;
};

void loadData(vector<Parcel>& parcels);
void addParcel(vector<Parcel>& parcels);
void editParcel(vector<Parcel>& parcels);
void showMenu();
int getValidatedChoice();
void deleteParcel(vector<Parcel>& parcels);
void searchParcel(const vector<Parcel>& parcels);
void displayAllParcels(const vector<Parcel>& parcels);
void saveData(const vector<Parcel>& parcels);