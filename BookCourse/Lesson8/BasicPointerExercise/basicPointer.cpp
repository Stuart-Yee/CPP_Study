#include <iostream>
using namespace std;

int main() {

    int age = 43; //Here is my regular variable
    int * intPointer = NULL; //initialized pointer to null

    cout << "Age " << age << " is located at " << &age <<endl;

    intPointer = &age; // assign the memory location for age to the intPointer

    cout << "My pointer is pointing to " << intPointer << endl;
}