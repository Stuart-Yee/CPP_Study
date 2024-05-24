#include <iostream>
#include <string>

int main() {
    using std::cout;
    using std::cin;

    cout << "Hello!" << std::endl;

    std::string name;

    cout << "What's your name?" << std::endl;

    cin >> name;

    cout << "Hello, " << name << std::endl;


    return 0;
}