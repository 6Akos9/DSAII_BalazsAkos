#include "Functions.h"

int main() {
    cout << "A ket szam legnagyobb kozos osztoja: " << lnkoRec(24, 36) << endl;
    cout << "A ket szam legkissebb kozos tobbszorose: " << lkktRec(24, 36, 24, 36) << endl;
    cout << "Hatvany: " << powerRec(2, 5) << endl;

    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "A tomb tartalma: ";
    printArrayRec(arr, size - 1);
    cout << endl;

    cout << "A tomb maximuma: " << maxArrayRec(arr, size - 1, arr[0]) << endl;
    return 0;
}
