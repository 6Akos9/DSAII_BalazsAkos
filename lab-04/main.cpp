#include <iostream>
#include "Functions.h"

int main() {
    int n = 4;
    int *a;
    a = new int [n];
    int combinationCount = 0;
    BT(a, n, 0, combinationCount);
    cout << "Az osszes kombinacio szama: " << combinationCount << endl;
    return 0;

}
