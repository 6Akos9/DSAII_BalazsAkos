#include <iostream>
#include "Functions.h"

int main() {
    int n = 4;
    int *a;
    a = new int [n];
    BT(a, n, 0);
    return 0;
}
