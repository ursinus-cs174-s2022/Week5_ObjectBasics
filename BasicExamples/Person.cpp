#include <string> // C++ String (object)
#include <iostream>
using namespace std; // Standard library
#include "Person.h"


void Person::setSSN(int ssn) { // Setter
    this->ssn = ssn;
}

int Person::getSSN() { // Getter
    return ssn;
}


void Person::celebrateBirthday() {
    this->age++;
}

void Person::fillNumbers() {
    nums = new int[10];
    for (int i = 0; i < 10; i++) {
        nums[i] = i;
    }
}

Person::Person(int age, unsigned int ssn, string name) {
    // Every object comes with a pointer to itself called "this"
    (*this).age = age;
    (*this).ssn = ssn;
    this->name = name; // The obj-> notation is shorthand for (*obj).
    // NOTE: If you don't set the member variables here,
    // they will have garbage initial values
    numPeople++;
    fillNumbers();
}

Person::Person() {
    numPeople++;
    fillNumbers();
}

Person::~Person() {
    cout << name << " ";
    delete[] nums;
}

bool Person::isStolen() {
    bool ret = false;
    if (ssn == 1234567890) {
        ret = true;
    }
    return ret;
}

int Person::numPeople = 0; // Assigning a static variable
