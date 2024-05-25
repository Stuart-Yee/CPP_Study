#include <iostream>

int main () {

    const int arrayLength = 5;
    int myNums[arrayLength];

    for (int i=0; i < arrayLength; i++) {
        myNums[i] = i;
    }

    for (int j=0; j < arrayLength; j++) {
        std::cout << myNums[j] << std::endl;
    }

    std::cout << "Some size references:" 
        << "\nSize of array: " << sizeof(myNums) << " bytes"
        << "\nSize of first element: " << sizeof(myNums[0]) << " bytes"
        << "\nNumber of elements (array size divided by element size): " << sizeof(myNums)/sizeof(myNums[0]) << std::endl; 

    // That I know of, there's no handy .length or .length() for arrays in C++

    char myString[] = {'p', 'i', 'c', 'k', 'l', 'e'}; // Strings were originally arrays of chars

    int arrSize = sizeof(myString)/sizeof(myString[0]);

    for (int c=0; c<arrSize; c++) {
        std::cout << myString[c];     // C++ does have a String class, but I think this was the old school way
    }

    std::cout << "\nprogram complete" << std::endl;

    return 0;
}