#include "Functions.h"

int main() {
    int n, m;
    vector<vector<int>> adjMat;
    vector<vector<int>> adjList;
    beolvas("input.txt", adjMat, adjList, n, m);
    kiirSzomszMatrix(adjMat, n);
    cout << "---------------------------------------------" << endl;
    kiirSzomszLista(adjList, n);
    cout << "---------------------------------------------" << endl;
    vector<int> color(n + 1, 0);
    int u = 1;
    cout<< "Dfs: ";
    dfs(u, adjList, color);
    return 0;
}