//
// Created by balaz on 2024. 05. 02..
//

#include "Functions.h"

void penzermek(int S, int n, int *w, long long int *c) {
    c[0] = 0;
    for (int i = 1; i <= S; ++i) {
        c[i] = INT_MAX;
        for (int k = 0; k < n; ++k) {
            if(i-w[k] >= 0 && c[i-w[k]] < c[i]){
                c[i] = c[i-w[k]];
            }
        }
        ++c[i];
    }
    cout << c[S] << endl;
}

int maxi(int a, int b) {
    return (a > b) ? a : b;
}

int mini(int a, int b) {
    return (a < b) ? a : b;
}

int optimumErtek(int n, vector<int> &a, vector<vector<int>> &c) {
    for (int k = 1; k < n; k += 2) {
        for (int i = 1, j = i+k; j <= n; ++i, ++j) {
            c[i][j] = maxi(a[i] + mini(c[i+1][j-1], c[i+2][j]),
                           a[j] + mini(c[i+1][j-1], c[i][j-2]));
        }
    }
    return c[1][n];
}
