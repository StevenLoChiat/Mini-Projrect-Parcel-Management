//Programmer    : BEH MING YANG
//Matric No.    : 24303532
//Function      : To validate the status of a parcel


#include <iostream>
#include "header.hpp"
using namespace std;

bool isValidStatus(const string & status) {
    if (status == "Pending" ||
        status == "Delivered" ||
        status == "In Transit") {
        return true;
    }

    return false;
}
