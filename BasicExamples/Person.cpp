#include <string> // C++ String (object)
#include <iostream>
using namespace std; // Standard library

class Person {
    public:
        // Member variables of method
        int age;
        unsigned int ssn;
        string name;

        // Constructor
        Person(int age, unsigned int ssn, string name) {
            // Every object comes with a pointer to itself called "this"
            (*this).age = age;
            (*this).ssn = ssn;
            this->name = name; // The obj-> notation is shorthand for (*obj).
            // NOTE: If you don't set the member variables here,
            // they will have garbage initial values
        }

        // An overloaded version of the constructor with no arguments
        Person() {
        }

        // Member method
        // Returns true if the social security number is 1234567890
        bool isStolen() {
            bool ret = false;
            if (ssn == 1234567890) {
                ret = true;
            }
            return ret;
        }
};

int main() {
    // Statically allocated object
    Person obj(32, 1234567890, "Chris Tralie");
    //Person obj1(32, 1987654321, "Tre");
    // Dynamically allocated object
    Person* obj1 = new Person();
    (*obj1).ssn = 99212309;
    (*obj1).name = "Tre";
    // Copied static object.  Changes made to this will
    // not affect the original object "obj"
    Person obj2 = obj;
    obj2.ssn = 0;
    obj2.name = "Nick";

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

    delete obj1; // Freeing memory from dynamically allocated object
    delete[] objs; // Freeing memory from array of object pointers
    return 0;
}