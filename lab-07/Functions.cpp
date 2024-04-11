//
// Created by balaz on 2024. 04. 11..
//

#include "Functions.h"

int BT(int a[][5], int i, int j, int n, int s, int S) {
    s += a[i][j];
    if (i == n - 1) {
        if (s < S)
            S = s;
    } else {
        S = BT(a, i + 1, j, n, s, S);
        S = BT(a, i + 1, j + 1, n, s, S);
    }
    return S;
}

void BT1(Menu &menu, int index, int total_calories, int &min_calories, vector<bool> &used) {
    if(index == menu.size()){
        if(total_calories < min_calories)
            min_calories = total_calories;
        return;
    }
    for (int i = 0; i < menu.size(); ++i) {
        if(!used[i]){
            if(index == 0 || (menu[i].name != "zoldseg a lerben" && menu[i].name != "citromtorta")){
                used[i] = true;
                BT1(menu, index+1, total_calories + menu[i].calories, min_calories, used);
                used[i] = false;
            }
        }
    }
}
