//
// Created by balaz on 2024. 03. 21..
//

#include "Functions.h"

void nQueen(int a[], int n, int k) {
    static int outputCount = 0;
    for (a[k] = 1; a[k] <= n; a[k]++) {
        if (igeretes(a, k)) {
            if (k < n)
                nQueen(a, n, k + 1);
            else {
                for (int i = 1; i <= n; ++i) {
                    for (int j = 1; j <= n; ++j) {
                        if (j == a[i]){
                            cout << "k";
                        }
                        else cout << "*";
                    }
                    cout << endl;
                }
                outputCount++;
                cout << endl;
            }
        }
    }
    if (k == 1)
        cout << "Number of outputs: " << outputCount << endl;
}

bool igeretes(const int a[], int k) {
    for (int i = 1; i <= k-1; ++i) {
        if (a[i] == a[k] || (k - i) == abs(a[k] - a[i]))
            return false;
    }
    return true;
}


