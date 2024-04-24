//
// Created by balaz on 2024. 04. 18..
//

#include "Functions.h"

bool compareExams(const Exam &exam1, const Exam &exam2) {
    return exam1.score < exam2.score;
}

vector<int> selectExams(const vector<Exam> &exams, double startTime, double endTime, int &totalScore) {
    totalScore = 0;
    vector<int> selectedExams;

    vector<Exam> sortedExams = exams;
    sort(sortedExams.begin(), sortedExams.end(), compareExams);

    for(const Exam& exam : sortedExams){
        if(exam.duration <= endTime - startTime){
            totalScore += exam.score;
            selectedExams.push_back(exam.number);
            endTime -= exam.duration;
        }
    }

    return selectedExams;
}

void backtracking(const vector<int> &numbers, int target, vector<int> &current, int sum, int index) {
    if (sum == target){
        printSolution(current);
        return;
    }
    if(sum > target || index >= numbers.size()){
        return;
    }
    for (size_t i = index; i < numbers.size(); ++i) {
        current.push_back(numbers[i]);
        backtracking(numbers, target, current, sum + numbers[i], i);
        current.pop_back();
    }
}

void printSolution(const vector<int> &solution) {
    cout << "[";
    for (int i = 0; i < solution.size(); ++i) {
        cout << solution[i];
        if(i < solution.size() - 1){
            cout << ",";
        }
    }
    cout << "]" << endl;
}
