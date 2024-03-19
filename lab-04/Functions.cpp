//
// Created by balaz on 2024. 03. 14..
//

#include "Functions.h"

void BT(int *x, int n, int k, int &combinationCount) {
    for(x[k] = 0; x[k] <= 9; x[k]++){
        if(k < n - 1){
            BT(x, n, k+1, combinationCount);
        }else{
            kiir(x, n);
            combinationCount++;
        }
    }
}

void kiir(int *x, int n) {
    for (int i = 0; i < n; ++i) {
        cout << x[i];
    }
    cout << endl;
}

