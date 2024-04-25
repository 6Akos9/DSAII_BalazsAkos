#include "Functions.h"

int main(){
    //1.FELADAT
    /*ifstream inputFile("input.txt");
    int n;
    inputFile >> n;
    char szinek[100][100];
    for (int i = 0; i < n; ++i) {
        inputFile >> szinek[i];
    }
    int m;
    cout << "Add meg hany szinbol akarsz zaszlot: ";
    cin >> m;
    int stack[100];
    int vane[100] = {0};
    btVariacio(stack, szinek, 0, n, m, vane);*/

    //3.FELADAT
    char szo[30];
    cin >> szo;
    for (int i = 0; i < strlen(szo); ++i) {
        if(!isalpha(szo[i])){
            strcpy(szo+i, szo+i+1);
            i--;
        }else{
            szo[i] = tolower(szo[i]);
        }
    }
    cout << "Palindrom: " << palindromRec(szo, 0, strlen(szo)-1);
    return 0;
}
