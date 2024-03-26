#include <iostream>
#include "Functions.h"

int main() {
    int n = 4;
    int *a = new int[n];
    nQueen(a, n, 1);
    return 0;
}
