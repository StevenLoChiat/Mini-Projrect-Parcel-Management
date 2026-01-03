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


//MENU
void showMenu();
int getValidatedChoice();
void handleMenuChoice(int choice, vector<Parcel>& parcels);

//FILE HANDLING
void loadData(vector<Parcel>& parcels);
void saveData(const vector<Parcel>& parcels);

//PARCEL MANAGEMENT
void addParcel(vector<Parcel>& parcels);
void editParcel(vector<Parcel>& parcels);
void deleteParcel(vector<Parcel>& parcels);
void searchParcel(const vector<Parcel>& parcels);

//DISPLAY
void displayAllParcels(const vector<Parcel>& parcels);

//VALIDATION
bool isValidID(const string& id);
bool isValidStatus(const string& status);