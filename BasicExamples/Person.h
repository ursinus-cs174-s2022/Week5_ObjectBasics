#ifndef PERSON_H // Header guard
#define PERSON_H

#include <string> // C++ String (object)
#include <iostream>
using namespace std; // Standard library

class Person {
    private:
        unsigned int ssn;
        int* nums;

    public:
        // "Member" variables of method (belong to object)
        int age;
        string name;

        static int numPeople; // This belongs to class

        void celebrateBirthday();
        void fillNumbers();

        void setSSN(int ssn);
        int getSSN();

        // Constructor
        Person(int age, unsigned int ssn, string name);

        // An overloaded version of the constructor with no arguments
        Person();

        ~Person();

        // Member method
        // Returns true if the social security number is 1234567890
        bool isStolen();
};


#endif