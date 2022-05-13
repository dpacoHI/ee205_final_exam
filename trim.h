///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file trim.h
/// @version 1.0
///
/// @author David Paco <dpaco@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_TRIM_H
#define EE205_FINAL_EXAM_TRIM_H


unsigned int string_length(const char inString[]);

const char* trim_left(const char inString[]);

char* map_chars(const char inString[], char buffer[]);

#endif //EE205_FINAL_EXAM_TRIM_H
