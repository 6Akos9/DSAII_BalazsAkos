//
// Created by balaz on 2024. 04. 11..
//

#ifndef LAB_07_FUNCTIONS_H
#define LAB_07_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

struct Food{
    string name;
    int calories;
    Food(string n, int c);
};

typedef vector<Food> Menu;

int BT(int a[][5], int i, int j, int n, int s, int S);
void BT1(Menu& menu, int index, int total_calories, int& min_calories, std::vector<bool>& used);
vector<Food> readFoodsFromFile(const string& filename);
vector<pair<string, int>> selectMenu(const vector<Food>&foods, int maxCalories);

#endif //LAB_07_FUNCTIONS_H
