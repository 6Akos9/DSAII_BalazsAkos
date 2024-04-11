#include <iostream>
#include "Functions.h"

int main() {
    int n = 5;
    int a[5][5] = {
            {7, 0, 0, 0, 0},
            {9, 5, 0, 0, 0},
            {1, 99, 4, 0, 0},
            {21, 7, 33, 17, 0},
            {2, 15, 8, 3, 1}
    };

    int S = INT_MAX;
    S = BT(a, 0, 0, n, 0 ,S);

    cout << "A legkisebb osszeg: " << S;
    return 0;
}
