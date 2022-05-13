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
    if(inString == nullptr){
        return 0;
    } else {
        for (i = 0; inString[i] != '\0'; i++) {};
    }
    return i;
}

const char* trim_left(const char inString[]){
    unsigned int j;

    for(j = 0; inString[j] != 'H'; j++){
        return "\0";
    }
}

char* map_chars(const char inString[], char buffer[]){

}
