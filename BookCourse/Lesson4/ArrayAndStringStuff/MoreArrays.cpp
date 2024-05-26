#include <iostream>
#include <string>
#include <vector>

int main(){

    // Dynamic arrays

    std::vector<int> dynInts (2); // 1 element size dynamic array

    dynInts[0] = 1; // Standard element access
    dynInts[1] = 3;

    dynInts.push_back(85); // or use .push_back() method

    std::cout << dynInts[2] << std::endl;

    std::cout << "Dynamic array size: " << dynInts.size() << std::endl;

    /* 
    You can only directly reference elements of a dynamic array based on its current
    size
    */

    std::vector<int> myInts (1);  // this is a 1 element size dynamic array
    myInts[0] = 82;
    myInts[1] = 5;  // This will not throw an error, but you're reassigning memory
    // Outside the array which can result in unexpected behavior
    // Now the dynamic array is [82]

    std::cout << "myInts size: " << myInts.size() << std::endl;

    myInts.push_back(32);
    std::cout << "myInts size after push_back: " << myInts.size() << std::endl;
    // Now the dynamic array is [82, 32]


    // C style strings
    // Strings in C origially existed as arrays of chars
    
    char myCString[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'}; // Needs to end with the \0 end of string character

    std::cout << "Outputing my C Style string";
    std::cout << myCString << std::endl;

    // However C Style strings have a lot of disadvantages and can be dangerous

    char inputCString[21] = {'\0'}; 
    std::cout << "Enter a word 20 letters or less: " << std::endl;
    std::cin >> inputCString;
    std::cout << "Your string: " << inputCString <<std::endl;

    // This is dangerous if the user enters a String longer than 20 characters

    std::cin.get(); //This "clears" the input stream so that subsequent input streams can be used below

    // C++ Strings
    std::string myCPPString = "Hello world"; // C++ Strings (if referenced after the #include preprocessor) works like most "modern" strings
    std::cout << myCPPString << std::endl;
    
    std::string cPPMessage; // Uninstantiated string declaration
    std::cout << "Enter a message for all mankind:" << std::endl;

    // By default, cin only takes in the first set of characters before the first space.
    // To get a full string including spaces, we need to use the getline() helper function
    getline(std::cin, cPPMessage);

    // Let's display some properties of the message:
    std::cout << "Your message: " << cPPMessage << std::endl;
    std::cout << "Your message is " << cPPMessage.length() << std::endl;
    

    return 0;
}