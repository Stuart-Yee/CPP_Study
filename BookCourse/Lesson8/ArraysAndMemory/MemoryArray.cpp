#include <iostream>
using namespace std;

void howBig(int someArr[]) {

    int arrSize = sizeof(someArr);
    cout << "The argument is " << arrSize << " bytes" <<endl;
    int elSize = sizeof(someArr[0]);
    int elements = arrSize/elSize;
    cout << "Each element is " << elSize << " so there are " << elements << " in this array" <<endl;

}

int main() {

    int threeNumbers[] = {1, 2, 3};
    int fiveNumbers[5];

    howBig(threeNumbers);
    howBig(fiveNumbers);

    return 0;

}