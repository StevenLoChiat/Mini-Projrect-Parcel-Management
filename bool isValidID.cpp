#include <iostream> 
#include "header.hpp"
using namespace std;

bool isValidID(const string & id) {
    
    if (id.length() != 4) {
        return false;
    }

    
    if (id[0] != 'P') {
        return false;
    }

    
    for (int i = 1; i < 4; i++) {
        if (!isdigit(id[i])) {
            return false;
        }
    }

    return true;
}
