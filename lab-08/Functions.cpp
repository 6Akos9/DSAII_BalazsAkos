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
