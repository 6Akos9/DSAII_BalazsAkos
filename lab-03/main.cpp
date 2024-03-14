#include <iostream>
#include "Functions.h"

int main() {
    ifstream file("D:\\DSAII_BalazsAkos\\DSAII_BalazsAkos\\lab-03\\adatok.txt");
    if (!file.is_open()) {
        cout << "Hiba: Az allomany megnyitasa sikertelen." << endl;
        return -1;
    }
    int n;
    int *array;
    read(array, n, file);
    file.close();
    cout << "A beolvasott tomb: ";
    printArrayRec(array, n - 1);
    cout << endl << "A rendezett tomb: ";
    /*cout << endl;
    cout << "Pozitiv szamok: " << countPositiveRec(array, n) << endl;
    cout << "Negativ szamok: " << countNegativeRec(array, n);*/
    //mergeSort(array, 0, n - 1);
    /*printArrayRec(array, n - 1);
    int maxElement = findMax(array, 0, n - 1);
    cout << endl << "A tomb maximuma: " << maxElement << endl;*/

    quicksort(array, 0, n-1);
    printArrayRec(array, n-1);
    return 0;
}
