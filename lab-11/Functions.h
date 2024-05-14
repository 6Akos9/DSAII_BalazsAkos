//
// Created by balaz on 2024. 05. 12..
//

#ifndef LAB_11_FUNCTIONS_H
#define LAB_11_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
enum Gender {MALE, FEMALE};

struct Person{
    string name;
    int age;
    int gender;
    int level;
};

void readPersonsFromFile(Person *p, int n, const string& filename);
void printPerson(const Person& p);
void avarageAgeByGender(Person *p, int n);
bool compareByFloor(const Person& a, const Person& b);
void minimizeWaitTime(Person* persons, int n);

//hazi
void generate_solutions(int n);
void print_board(const std::vector<std::vector<int>>& board);
bool is_valid_queen(const std::vector<std::vector<int>>& board, int row, int col, int n);
bool solve_queens(std::vector<std::vector<int>>& board, int col, int n);
bool is_valid_rook(const std::vector<std::vector<int>>& board, int row, int col, int n);
bool solve_rooks(std::vector<std::vector<int>>& board, int col, int n);

#endif //LAB_11_FUNCTIONS_H
