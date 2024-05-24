#include <iostream>


int main() {

    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Hello world!" << endl;
    cout << "What is your favorite number?" << endl;

    int answer;

    cin >> answer;

    cout << "Your answer is " << answer << endl;

    return 0;
}