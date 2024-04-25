//
// Created by balaz on 2024. 04. 25..
//
#include "Functions.h"

void btVariacio(int stack[100], char szinek[100][100], int k, int n, int m, int vane[100]) {
    if(k == m){
        for (int i = 0; i < k; ++i) {
            cout << szinek[stack[i]] << " ";
        }
        cout << endl;
        return;
    }else {
        for (int i = 0; i < n; ++i) {
            if(k == m/2 && strcmp((szinek[stack[k-1]]), "piros") != 0){
                continue;
            }
            if (!vane[i]) {
                stack[k] = i;
                vane[i] = 1;
                btVariacio(stack, szinek, k + 1, n, m, vane);
                vane[i] = 0;
            }
        }
    }
}

bool palindromRec(char *word, int i, int j) {
    if(i < 1){
        if(word[i] != word[j]){
            return false;
        }else{
            return 1 + palindromRec(word, i+1, j-1);
        }
    }
    return i;
}
