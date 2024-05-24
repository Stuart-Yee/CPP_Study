#include <iostream>
#include <string>

int main() {
    using namespace std;

    int myInt = 1;
    long myLong = 252;
    short shortInt = 2;
    string answer;

    typedef long long BIG_INT;

    BIG_INT myId = 9434458094059840280;

    cout << "Size of an int " << sizeof(myInt) << endl;
    cout << "Size of a long " << sizeof(myLong) << endl;
    cout << "Size of a short " << sizeof(shortInt) << endl;
    cout << "Size of long long " << sizeof(myId) << endl;
    cout << "Enter a word" << endl;
    cin >> answer;

    cout << "The size of the word " << answer << " is " << sizeof(answer) <<endl;

    return 0;
}