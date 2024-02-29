//
// Created by balaz on 2024. 02. 29..
//

#ifndef LAB_02_FUNCTIONS_H
#define LAB_02_FUNCTIONS_H

#include <fstream>
#include <iostream>
#include <iterator>
using namespace std;

int lnkoRec(int a, int b);
int lkktRec(int a, int b, int a1, int b1);
int powerRec(int b, int e);
void readArrayRec(int *a, int n, ifstream &f);
void printArrayRec(int *a, int n);
int sumArrayRec(int *a, int n);
int maxArrayRec(int *a, int n, int max);
int lnkoArrayRec(int *a, int n);
void digitNumbers(int n);
int inverseNumber(int n,int fn);

#endif //LAB_02_FUNCTIONS_H
