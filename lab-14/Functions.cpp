#include "Functions.h"

void printEvenDigits(int number) {
    if (number < 10) {
        if (number % 2 == 0) {
            cout << number << " ";
        }
        return;
    }
    int lastDigit = number % 10;
    if (lastDigit % 2 == 0) {
        printEvenDigits(number / 10);
        cout << lastDigit << " ";
    } else {
        printEvenDigits(number / 10);
    }
}

void readGraphFromFile(const string& filename, vector<vector<int>>& adjMat, int& n, int& m) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Hiba a file megnyitasakor";
        return;
    }
    file >> n;
    file >> m;
    adjMat.resize(n + 1, vector<int>(n + 1, 0));
    adjList.resize(n + 1);
    int x, y, c;
    for (int i = 0; i < m; ++i) {
        file >> x >> y >> c;
        adjMat[x][y] = adjMat[y][x] = c;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    file.close();
}

void printAdjList() {
    cout << "Szomszed lista: \n";
    for (int i = 1; i < adjList.size(); ++i) {
        cout << i << ": ";
        for (int j : adjList[i]) {
            cout << "->" << j << " ";
        }
        cout << "\n";
    }
}

void printAdjMatrix(const vector<vector<int>>& adjMat) {
    cout << "Szomszedsagi matrix:" << endl;
    for (int i = 1; i < adjMat.size(); ++i) {
        for (int j = 1; j < adjMat[i].size(); ++j) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

void findNodeWithMaxNeighbors() {
    vector<int> neighborCounter(adjList.size(), 0);
    for (int i = 1; i < adjList.size(); ++i) {
        neighborCounter[i] = adjList[i].size();
    }

    int maxNeighbors = 0;
    for (int i = 1; i < neighborCounter.size(); ++i) {
        maxNeighbors = max(maxNeighbors, neighborCounter[i]);
    }

    cout << "A legtobb szomszed ";
    for (int i = 1; i < neighborCounter.size(); ++i) {
        if (neighborCounter[i] == maxNeighbors) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void breadthFirstSearch(int start) {
    vector<bool> visited(adjList.size(), false);
    queue<int> q;
    vector<int> result;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        result.push_back(current);

        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << "Szelessegi bejaras eredmenye: ";
    for (int vertex : result) {
        cout << vertex << " ";
    }
    cout << endl;
}