//
// Created by balaz on 2024. 02. 29..
//

#include "Functions.h"

int lnkoRec(int a, int b) {
    if(b == 0){
        return a;
    }else{
        return lnkoRec(b, a % b);
    }
}

int lkktRec(int a, int b, int a1, int b1) {
    if(a == 0 || b == 0){
        return 0;
    }else if(a == a1 && b == b1){
        return (a * b) / lnkoRec(a, b);
    }else{
        return lkktRec(a, b, a1 + 1, b1);
    }
}

int powerRec(int b, int e) {
    if(e == 0){
        return 1;
    }else if(e < 0){
        cout << "Negativ kitevo nem tamogatott!" << endl;
        return -1;
    }else{
        return b * powerRec(b, e - 1);
    }
}

void readArrayRec(int *a, int n, ifstream &f) {
    if(n >= 0){
        readArrayRec(a, (n - 1), f);
        f >> a[n];
    }
}

void printArrayRec(int *a, int n) {
    if(n >= 0){
        printArrayRec(a, n - 1);
        cout << a[n] << " ";
    }
}

int sumArrayRec(int *a, int n) {
    if(n < 0){
        return 0;
    }else{
        return a[n] + sumArrayRec(a, n - 1);
    }
}

int maxArrayRec(int *a, int n, int max) {
    if(n < 0){
        return max;
    }else{
        if(a[n] > max){
            max = a[n];
        }
        return maxArrayRec(a, n - 1, max);
    }
}

int lnkoArrayRec(int *a, int n) {
    if(n == 0){
        return a[0];
    }else{
        return lnkoRec(a[n], lnkoArrayRec(a, n - 1));
    }
}

void digitsNumberRec(int n) {
    if(n < 0) n = -n;
    static int count = 0;
    if(n == 0){
        cout << "A szamjegyek szama: " << count << endl;
        count = 0;
    }else{
        count++;
        digitsNumberRec(n/10);
    }
}

int inverseNumber(int n, int fn) {
    if(n == 0){
        return fn;
    }else{
        int digit = n % 10;
        fn = fn * 10 + digit;
        return inverseNumber(n / 10, fn);
    }
}
