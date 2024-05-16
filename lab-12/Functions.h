//
// Created by balaz on 2024. 05. 16..
//

#ifndef LAB_12_FUNCTIONS_H
#define LAB_12_FUNCTIONS_H

#include <string>
#include <vector>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

void beolvas(const string& filename, vector<vector<int>>& adjMat, vector<vector<int>>& adjList, int& n, int& m);
void kiirSzomszMatrix(const vector<vector<int>>& adjMat, int n);
void kiirSzomszLista(const vector<vector<int>>& adjList, int n);
void dfs(int u, const vector<vector<int>>& adjList, vector<int>& color);

#endif //LAB_12_FUNCTIONS_H
