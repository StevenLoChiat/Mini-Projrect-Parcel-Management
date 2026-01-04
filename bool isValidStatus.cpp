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
