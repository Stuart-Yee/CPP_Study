#include <iostream>
using namespace std;

int main() {

    // New and Delete

    int *anInteger = new int;
    *anInteger = 3;

    cout << "My anInteger value is " << *anInteger << " at " << anInteger << endl;
    cout << "(uses anInteger)" << endl;
    cout << "It is now time to delete my anInteger" << endl;
    delete anInteger;

    // cout << "My anInteger value (after deleting) is " << *anInteger << " at " << anInteger << endl;
    // ^^ This is a BAD idea!

    // Incrementing ++ pointers
    cout << "Setting up a new set of integer pointers:" << endl;

    int numValues = 5;
    int *intPointers = new int [numValues];
    for (int i = 0; i < numValues; i++) {
        *intPointers = i;
        intPointers++;
    }
    for (int j=0; j<numValues; j++) {
        cout << *--intPointers << endl;
    }

    cout << "time to delete that too" << endl;

    delete intPointers;

    cout << "end program" << endl;

    return 0;
}