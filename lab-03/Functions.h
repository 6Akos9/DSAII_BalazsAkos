//
// Created by balaz on 2024. 03. 07..
//

#ifndef LAB_03_FUNCTIONS_H
#define LAB_03_FUNCTIONS_H

#include <fstream>
#include <iostream>
#include <iterator>
using namespace std;

void read(int *&array, int &n, ifstream &f);
void printArrayRec(int *a, int n);
int countPositiveRec(int *a, int n);
int countNegativeRec(int *a, int n);
void mergeSort(int array[], int begin, int end);
void merge(int *array, int left, int mid, int right);

#endif //LAB_03_FUNCTIONS_H
