//
// Created by balaz on 2024. 04. 18..
//

#ifndef LAB_08_FUNCTIONS_H
#define LAB_08_FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Exam{
    int number;
    int score;
    double duration;
};

bool compareExams(const Exam& exam1, const Exam& exam2);
vector<int> selectExams(const vector<Exam>& exams, double startTime, double endTime, int& totalScore);

void backtracking(const vector<int>& numbers, int target, vector<int>& current, int sum, int index);
void printSolution(const vector<int>& solution);

#endif //LAB_08_FUNCTIONS_H
