//
// Created by macie on 27/02/2024.
//

#include "UsefulMethods.h"

string UsefulMethods::doubleToString(double d, int precision) {
    string result;
    string temp = to_string(d);
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] == '.') {
            if(precision <= 0) break;
            for (int j = 0; j < precision+1; j++) {
                result += temp[i + j];
            }
            break;
        }
        result += temp[i];
    }
    return result;
}