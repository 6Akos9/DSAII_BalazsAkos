//
// Created by balaz on 2024. 05. 16..
//

#include "Functions.h"

void beolvas(const string& filename, vector<vector<int>>& adjMat, vector<vector<int>>& adjList, int& n, int& m) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file" << endl;
        return;
    }
    infile >> n >> m;
    adjMat.resize(n + 1, vector<int>(n + 1, 0));
    adjList.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int x, y, c;
        infile >> x >> y >> c;
        adjMat[x][y] = c;
        adjMat[y][x] = c;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    infile.close();
}

void kiirSzomszMatrix(const vector<vector<int>>& adjMat, int n) {
    cout << "Szomszedsagi matrix:" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

void kiirSzomszLista(const vector<vector<int>>& adjList, int n) {
    cout << "Szomszedsagi lista:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << ": ";
        for (int j : adjList[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void dfs(int u, const vector<vector<int>>& adjList, vector<int>& color) {
    color[u] = 2;
    cout << u<<" ";
    for(int i = 0; i < adjList[u].size(); i++) {
        int v = adjList[u][i];
        if(color[v] == 0) {
            dfs(v, adjList, color);
        }
    }
    color[u] = 2;
}
