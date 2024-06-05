#include <iostream>
#include <string>
using namespace std;


int main(int argc, char * argv[]) {

    for (int i = 0; i < argc; ++i) {
        cout << "Argument: " << argv[i] << endl;
    }

    return 0;

}