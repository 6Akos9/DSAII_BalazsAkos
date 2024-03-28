#include <iostream>
#include "Functions.h"

int main() {
    int n = 4;
    int m = 2;
    int *x = new int[n + 1];
    BTRcombinationTantargyak(x, n, 0, m);
    return 0;
}
