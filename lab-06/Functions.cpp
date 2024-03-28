//
// Created by balaz on 2024. 03. 28..
//

#include "Functions.h"

void BTRbasic(int *x, int n, int k) {
    for (x[k] = 0; x[k] < n; ++x[k]) {
        if(igeretesBasic(x, k)){
            if(k < n-1){
                BTRbasic(x, n, k+1);
            }else{
                kiirBasic(x, n);
            }
        }
    }
}

bool igeretesBasic(int *x, int k) {
    return true;
}

void kiirBasic(int *x, int n) {
    for (int i = 0; i < n; ++i) {
        cout << x[i] << " ";
    }
    cout << endl;
}

void BTRpermutation(int *x, int n, int k) {
    for (x[k] = 1; x[k] <= n; ++x[k]) {
        if(igeretesPermutation(x, k)){
            if(k < n-1){
                BTRpermutation(x, n, k+1);
            }else{
                kiirBasic(x, n);
            }
        }
    }
}

bool igeretesPermutation(int *x, int k) {
    for (int i = 0; i < k; ++i) {
        if(x[k] == x[i]){ //ne ismetlodjenek
            return false;
        }
    }
    return true;
}

void BTRvariation(int *x, int n, int k, int m) {
    for (x[k] = 1; x[k] <= n; ++x[k]) {
        if(igeretesPermutation(x, k)){
            if(k < m-1){
                BTRvariation(x, n, k+1, m);
            }else{
                kiirBasic(x, m);
            }
        }
    }
}

void BTRcombination(int *x, int n, int k, int m) {
    for (x[k] = 1; x[k] <= n; ++x[k]) {
        if(igeretesCombination(x, k)){
            if(k < m-1){
                BTRcombination(x, n, k+1, m);
            }else{
                kiirBasic(x, m);
            }
        }
    }
}

bool igeretesCombination(int *x, int k) {
    for (int i = 0; i < k; ++i) {
        if(x[k] <= x[i]){ //ne ismetlodjenek es novekvo legyen a sorrend
            return false;
        }
    }
    return true;
}

void BTRreszhalmaz(int *x, int n, int k) {
    for (x[k] = 0; x[k] <= 1; ++x[k]) {
        if(igeretesBasic(x, k)){
            if(k < n-1){
                BTRreszhalmaz(x, n, k+1);
            }else{
                kiirReszhalmaz(x, n);
            }
        }
    }
}

void kiirReszhalmaz(int *x, int n) {
    for (int i = 0; i < n; ++i) {
        if(x[i] == 1){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

void BTRVariacioTesztak(int *x, int n, int k, int m) {
    for (x[k] = 1; x[k] <= n; ++x[k]) {
        if(igeretesPermutation(x, k)){
            if(k < m-1){
                BTRVariacioTesztak(x, n, k+1, m);
            }else{
                kiirTesztak(x, m);
            }
        }
    }
}

void kiirTesztak(int *x, int n) {
    char tesztak[10][25] = {"sosperec", "sajtospogacsa", "szezammagospogacsa", "kalacs", "sosrud"};
    for (int i = 0; i < n; ++i) {
        cout << tesztak[x[i]] << " ";
    }
    cout << endl;
}

void BTRreszhalmazTesztak(int *x, int n, int k) {
    for (x[k] = 0; x[k] <= 1; ++x[k]) {
        if(igeretesBasic(x, k)){
            if(k < n-1){
                BTRreszhalmazTesztak(x, n, k+1);
            }else{
                kiirReszhalmazTesztak(x, n);
            }
        }
    }
}

void kiirReszhalmazTesztak(int *x, int n) {
    char tesztak[10][25] = {"sosperec", "sajtospogacsa", "szezammagospogacsa", "kalacs", "sosrud"};
    for (int i = 0; i < n; ++i) {
        if(x[i] == 1){
            cout << tesztak[i+1] << " ";
        }
    }
    cout << endl;
}

void BTRcombinationTantargyak(int *x, int n, int k, int m) {
    for (x[k] = 0; x[k] <= n; ++x[k]) {
        if(igeretesCombinationTantargyak(x, k)){
            if(k < m-1){
                BTRcombinationTantargyak(x, n, k+1, m);
            }else{
                kiirBasicTantargyak(x, m);
            }
        }
    }
}

bool igeretesCombinationTantargyak(int *x, int k) {
    for (int i = 0; i < k; ++i) {
        if(x[k] == x[i]){ //ne ismetlodjenek es novekvo legyen a sorrend
            return false;
        }
    }
    return true;
}

void kiirBasicTantargyak(int *x, int n) {
    Tantargy tantargyak[5] = {"matek", 5, "magyar", 3, "roman", 5, "foldrajz", 2, "bio", 3};
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cout << tantargyak[x[i]].name << " ";
        sum += tantargyak[x[i]].kredit;
    }
    cout << "Osszesen felvett kredit: " << sum;
    cout << endl;
}