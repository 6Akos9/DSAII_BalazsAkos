#include <iostream>
#include "Functions.h"

int main() {
    int n=4;
    /*Person *persons = new Person[n];
    readPersonsFromFile(persons, n, "bemenet.txt");
    for (int i = 0; i < n; ++i) {
        printPerson(persons[i]);
    }
    avarageAgeByGender(persons, n);
    minimizeWaitTime(persons, n);*/
    generate_solutions(n);

    //delete[] persons;
    return 0;
}
