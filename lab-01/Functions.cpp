//
// Created by balaz on 2024. 02. 22..
//

#include "Functions.h"

int lnko(int a, int b) {
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lkkt(int a, int b) {
    if(a == 0 || b == 0){
        return 0;
    }else{
        return (a * b) / lnko(a, b);
    }
}

int power(int b, int e) {
    if(b < 0){
        cout << "A szam negativ." << endl;
        return -1;
    }else if(e == 0){
        cout << "Minden szam a 0-on 1!" << endl;
        return 1;
    }else {
        int result = 1;
        for (int i = 0; i < e; ++i) {
            result *= b;
        }
        return result;
    }
}

void read_array(int *a, int n) {
    cout << "Adj meg " << n << " db szamot: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void print_array(int *a, int n) {
    cout << "A tomb elemei: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int linearSearch(int *array, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int binarySearch(const int *array, int size, int target) {
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == target){
            return mid;
        }else if(array[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

void selection_sort(int *a, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = 0; j < n; ++j) {
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

void minimselection_sort(int *a, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = 0; j < n; ++j) {
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

void bubble_sort(int *a, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
