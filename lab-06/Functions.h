//
// Created by balaz on 2024. 03. 28..
//

#ifndef LAB_06_FUNCTIONS_H
#define LAB_06_FUNCTIONS_H
#include <iostream>
using namespace std;

typedef struct Tantargy{
    char name[10];
    int kredit;
}Tantargy;

void BTRbasic(int *x, int n, int k);
void kiirBasic(int *x, int n);
bool igeretesBasic(int *x, int k);
void BTRpermutation(int *x, int n, int k);
bool igeretesPermutation(int *x, int k);
void BTRvariation(int *x, int n, int k, int m);
void BTRcombination(int *x, int n, int k, int m);
bool igeretesCombination(int *x, int k);
void BTRreszhalmaz(int *x, int n, int k);
void kiirReszhalmaz(int *x, int n);
void BTRVariacioTesztak(int *x, int n, int k, int m);
void kiirTesztak(int *x, int n);
void BTRreszhalmazTesztak(int *x, int n, int k);
void kiirReszhalmazTesztak(int *x, int n);
bool igeretesCombinationTantargyak(int *x, int k);
void BTRcombinationTantargyak(int *x, int n, int k, int m);
void kiirBasicTantargyak(int *x, int n);

#endif //LAB_06_FUNCTIONS_H
