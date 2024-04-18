#include "Functions.h"

int main() {
    ifstream inputFile("input.txt");
    int n;
    inputFile >> n;
    vector<Exam> exams(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> exams[i].score >> exams[i].duration;
        exams[i].number = i + 1;
    }
    double startTime, endTime;
    inputFile >> startTime >> endTime;
    inputFile.close();

    int totalScore;
    vector<int> selectedExams = selectExams(exams, startTime, endTime, totalScore);
    cout << "Kivalasztott vizsgak sorszama: ";
    for (int examNumber : selectedExams){
        cout << examNumber << " ";
    }
    cout << endl;

    cout << "Osszpontszam: " << totalScore << endl;

    if(totalScore >= 180){
        cout << "Megkapja a karorat." << endl;
    }else{
        cout << "Nem kapja meg a karorat." << endl;
    }
    return 0;
}
