#include <iostream>
#include "Functions.h"

int main() {
    cout << "LNKO = " << lnko(1372, 198) << endl;
    cout << "LKKT = " << lkkt(1372, 198) << endl;
    cout << "POWER = " << power(2, 5) << endl;

    int n;
    cout << "Add meg a tomb meretet: ";
    cin >> n;
    int *arr = new int[n];
    read_array(arr, n);
    print_array(arr, n);

    int target;
    cout << "Add meg melyik szamot keresed a tombben: ";
    cin >> target;
    int result = linearSearch(arr, n, target);
    if(result != -1){
        cout << "A keresett szam megtalalva a " << result << " indexen" << endl;
    }else{
        cout << "Nincs ilyen szam a tombben." << endl;
    }

    int result2 = binarySearch(arr, n, target);
    if(result2 != -1){
        cout << "A keresett szam megtalalva a " << result << " indexen" << endl;
    }else{
        cout << "Nincs ilyen szam a tombben." << endl;
    }

    return 0;
}
