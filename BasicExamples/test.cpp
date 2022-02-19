#include <string> // C++ String (object)
#include <iostream>
using namespace std; // Standard library
#include "Person.h"

void doTest() {
    // Statically allocated object
    int x = 174;
    Person obj(32, 1234567890, "Chris");
    //Person obj1(32, 1987654321, "Tre");
    // Dynamically allocated object
    Person* obj1 = new Person();
    (*obj1).setSSN(99212309);
    //printf("Favorite number[0] = %i\n", obj->nums[0]);
    (*obj1).name = "Tre";
    // Copied static object.  Changes made to this will
    // not affect the original object "obj"
    Person obj2(40, 174, "Nick");

    // Create an array of pointers to the objects
    Person** objs = new Person*[3];
    objs[0] = &obj;
    objs[1] = obj1;
    objs[2] = &obj2;
    for (int i = 0; i < 3; i++) {
        if (objs[i]->isStolen()) {
            cout << objs[i]->name << ", you got owned\n";
        }
        else {
            cout << objs[i]->name << ", you are okay!\n";
        }
    }
    Person::numPeople = 10;
    cout << "There are " << Person::numPeople << " people\n";
    delete obj1; // Freeing memory from dynamically allocated object
    delete[] objs; // Freeing memory from array of object pointers
}

int main() {
    doTest();
    return 0;
}