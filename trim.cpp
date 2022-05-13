///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file trim.cpp
/// @version 1.0
///
/// @author David Paco <dpaco@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "trim.h"
#include <iostream>

unsigned int string_length(const char inString[]) {
    unsigned int i;
    for (i = 0; inString[i] != '\0'; i++){};
    return i;
}

/*const char* trim_left(const char inString[]){
    int j;
    for(j = 0; inString[j] < 19; j++){
        if (inString[j] == '-'){
            return static_cast<const char *>('\0');
        } else {
            return inString[j];
        }
    }
    return 0;
}*/
