// stringbad.h -- flawed string class definition
#include<iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad{
private:
    char * str;             // pointer to string
    int len;                // length of string
    static int num_strings; // number of objects
public:
    StringBad(const char * s);  // constructor
    StringBad();                // default constructor
    ~StringBad();               // destructor
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & sb);
};


#endif