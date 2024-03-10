//
// Created by balaz on 2024. 03. 07..
//

#include "Functions.h"

void read(int *&array, int &n, ifstream &f) {
    if(!f.is_open()){
        cout<<"File open error";
        exit(-1);
    }
    f>>n;
    array=new int[n];
    if(!array){
        cout<<"Memeory allocation error";
        exit(-2);
    }
    for(int i=0;i<n;i++)
        f>>array[i];
}

void printArrayRec(int *a, int n) {
    if (n >= 0) {
        printArrayRec(a, (n-1));
        cout << a[n] << " ";
    }
}

int countPositiveRec(int *a, int n) {
    if(n == 0){
        return 0;
    }
    return (a[0] > 0 ? 1 : 0) + countPositiveRec(a + 1, n - 1);
}

int countNegativeRec(int *a, int n) {
    if(n == 0){
        return 0;
    }
    return (a[0] < 0 ? 1 : 0) + countNegativeRec(a + 1, n - 1);
}

void merge(int *array, int left, int mid, int right) {
    int leftSize = mid-left+2;
    int rightSize = right-mid+1;
    int *leftArray = new int[100];
    int *rightArray = new int[100];
    for (int i = left; i <= mid; ++i) {
        leftArray[i] = array[i];
    }
    for (int i = mid + 1; i <= right; ++i) {
        rightArray[i] = array[i];
    }
    leftArray[mid + 1] = INT_MAX;
    rightArray[right + 1] = INT_MAX;
    int leftIndex = left;
    int rightIndex = mid + 1;
    for (int i = left; i <= right; ++i) {
        if(leftArray[leftIndex] < rightArray[rightIndex]){
            array[i] = leftArray[leftIndex];
            leftIndex++;
        }else{
            array[i] = rightArray[rightIndex];
            rightIndex++;
        }
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int *array, int begin, int end) {
    if(begin < end){
        int middle = (begin + end) / 2;
        mergeSort(array, begin, middle);
        mergeSort(array, middle + 1, end);
        merge(array, begin, middle, end);
    }
}

int findMax(int *array, int left, int right) {
    if(left == right){
        return array[left];
    }
    int mid = (left + right) / 2;
    int maxLeft = findMax(array, left, mid);
    int maxRight = findMax(array, mid + 1, right);
    return max(maxLeft, maxRight);
}


