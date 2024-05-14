//
// Created by balaz on 2024. 05. 12..
//

#include "Functions.h"

void readPersonsFromFile(Person *p, int n, const string &filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Nem sikerült megnyitni a fájlt." << endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        string line;
        getline(file, line);
        stringstream ss(line);
        string first_name, last_name;
        ss >> first_name >> last_name;
        p[i].name = first_name + " " + last_name;

        ss >> p[i].age >> p[i].gender >> p[i].level;
    }

    file.close();
}

void printPerson(const Person &p) {
    cout << "Nev: " << p.name << " Eletkor: " << p.age << " Nem: ";
    if (p.gender == 1) {
        cout << "Ferfi";
    } else if (p.gender == 2) {
        cout << "No";
    } else {
        cout << "Ismeretlen nem ";
    }
    cout << " Szint: " << p.level << endl;
}

void avarageAgeByGender(Person *p, int n) {
    int males = 0, females = 0;
    int fcounter=0,mcounter=0;
    for (int i = 0; i < n; ++i) {
        if (p[i].gender == 1) {
            males += p[i].age;
            mcounter++;
        } else if (p[i].gender == 2) {
            females += p[i].age;
            fcounter++;
        }
    }
    cout<<"A nok atlag eletkora: " << females/fcounter << endl;
    cout<<"A ferfi atlag eletkora: " << males/mcounter << endl;

}
//q
bool compareByFloor(const Person& a, const Person& b) {
    return a.level < b.level;
}
void minimizeWaitTime(Person* persons, int n) {
    std::sort(persons, persons + n, [](const Person& a, const Person& b) {
        return a.level < b.level;
    });

    int currentTime = 0;
    int totalWaitTime = 0;

    for (int i = 0; i < n; ++i) {
        int travelTime = std::abs(persons[i].level - currentTime);
        totalWaitTime += travelTime;
        currentTime = persons[i].level;
    }

    std::cout << "Osszvarakozasi ido minimalizalasa: " << totalWaitTime << std::endl;
}
//hazi feladat fuggvenyei

//ezzel a fuggvennyel megnezzuk hogy lehetseges-e a kiralyno felhelyezese a tablara hogy ne usson mas kiralynot
bool is_valid_queen(const std::vector<std::vector<int>>& board, int row, int col, int n) {
    //ellenorizzuk a sort
    for (int i = 0; i < col; ++i) {
        if (board[row][i] == 1) return false;
    }
    //ellenorizzuk a oszlopot
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 1) return false;
    }
    //ellenorizzuk az atlokat
    for (int i = row, j = col; i < n && j >= 0; ++i, --j) {
        if (board[i][j] == 1) return false;
    }
    return true;
}
//rekurzivan felrakjuk a kiralynoket
bool solve_queens(std::vector<std::vector<int>>& board, int col, int n) {
    if (col >= n) return true;

    for (int i = 0; i < n; ++i) {
        if (is_valid_queen(board, i, col, n)) {
            board[i][col] = 1;

            if (solve_queens(board, col + 1, n)) return true;

            board[i][col] = 0;
        }
    }

    return false;
}

bool is_valid_rook(const std::vector<std::vector<int>>& board, int row, int col, int n) {
    for (int i = 0; i < n; ++i) {
        if (board[i][col] == 1 && i != row) return false;
    }

    for (int i = 0; i < n; ++i) {
        if (board[row][i] == 1 && i != col) return false;
    }

    return true;
}

bool solve_rooks(std::vector<std::vector<int>>& board, int col, int n) {
    if (col >= n) return true;

    for (int i = 0; i < n; ++i) {
        if (is_valid_rook(board, i, col, n)) {
            board[i][col] = 1;

            if (solve_rooks(board, col + 1, n)) return true;

            board[i][col] = 0;
        }
    }

    return false;
}
//letrehozzuk a sakktablat es felpakolunk ra minden kiralynot es bastyat
void generate_solutions(int n) {
    std::vector<std::vector<int>> board(n, std::vector<int>(n, 0));

    solve_queens(board, 0, n);

    std::cout << "Kiralynok:" << std::endl;
    print_board(board);

    solve_rooks(board, 0, n);

    std::cout << "\nBastyak:" << std::endl;
    print_board(board);
}

void print_board(const std::vector<std::vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}