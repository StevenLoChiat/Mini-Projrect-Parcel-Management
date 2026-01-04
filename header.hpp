//coder         : STEVEN LO CHIAT
//Matric No.    : 24301075
//Function      : Header file for parcel management system


#ifndef HEADER_HPP
#define HEADER_HPP

#include <string>
#include <vector>

struct Parcel {
    std::string id;
    std::string sender;
    std::string receiver;
    double weight;
    std::string status;
};

// MENU
void showMenu();
int getValidatedChoice();
void handleMenuChoice(int choice, std::vector<Parcel>& parcels);

// FILE HANDLING
void loadData(std::vector<Parcel>& parcels);
void saveData(const std::vector<Parcel>& parcels);

// PARCEL MANAGEMENT
void addParcel(std::vector<Parcel>& parcels);
void editParcel(std::vector<Parcel>& parcels);
void deleteParcel(std::vector<Parcel>& parcels);
void searchParcel(const std::vector<Parcel>& parcels);

//VALIDATION
bool isValidID(const string & id);
bool isValidStatus(const string & status);

// DISPLAY
void displayAllParcels(const std::vector<Parcel>& parcels);

#endif