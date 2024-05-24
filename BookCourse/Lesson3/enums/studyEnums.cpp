#include <iostream>

using namespace std;

void showRanks(int RankEnum) {
    cout << RankEnum << endl;
}

int main() {

    enum sfRanks {
        ltJg = 1,
        lt = 5,
        ltCmdr = 10,
        cmdr = 15,
        capt = 20
    };

    sfRanks geordi = ltJg;
    sfRanks data = ltCmdr;
    sfRanks picard = capt;

    showRanks(geordi);
    showRanks(picard);

    return 0;
}
