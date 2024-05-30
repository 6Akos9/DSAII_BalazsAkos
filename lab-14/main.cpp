#include "Functions.h"

int main() {
    int number = 972276;
    printf("Eredmeny:");
    printEvenDigits(number);

    string filename = "input.txt";
    int n, m;
    vector<vector<int>> adjMat;
    readGraphFromFile(filename, adjMat, n, m);

    printAdjList();
    printAdjMatrix(adjMat);

    findNodeWithMaxNeighbors();

    int startVertex = 5;
    breadthFirstSearch(startVertex);

    return 0;
}