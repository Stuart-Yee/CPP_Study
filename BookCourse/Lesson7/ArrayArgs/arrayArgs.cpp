#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length)
{
    for (int index = 0; index<length; index++) {
        cout << numbers[index] << " ";
    }
    cout << endl;
}

int main() 
{
    int myNums[4] = {24, 58, -1, 245};
    DisplayArray(myNums, 4);

    return 0;
}

/*
I could have sworn passing an array as an argument into
a function causes it to decay into a pointer, but I could
be wrong. Or maybe I'm thinking of something else.
*/