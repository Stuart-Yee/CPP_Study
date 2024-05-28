#include <iostream>
using namespace std;

int passValDouble(int x) {
    x *= 2;
    return x;
}

int passRefDouble(int &x) {
    x *= 2;
    return x;
}

int main() {

    int a = 4;
    int b = 4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Double by val a: " << passValDouble(a) << endl;
    cout << "Double by ref b: " << passRefDouble(b) << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Program ended successfully" <<endl;
    return 0;
}