//
// Created by balaz on 2024. 05. 30..
//

#ifndef LAB_14_FUNCTIONS_H
#define LAB_14_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> adjList;

void printEvenDigits(int number);
void readGraphFromFile(const string& filename, vector<vector<int>>& adjMat, int& n, int& m);
void printAdjList();
void printAdjMatrix(const vector<vector<int>>& adjMat);
void findNodeWithMaxNeighbors();
void breadthFirstSearch(int start);

#endif //LAB_14_FUNCTIONS_H
