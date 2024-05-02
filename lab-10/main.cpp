#include "Functions.h"

int main() {
    /*int S = 11;
    int n = 3;
    int w[] = {2,3,5};
    long long int c[S+1];
    penzermek(S, n, w, c);*/

    int n = 5;
    vector<int> a = {19, 2, 4, 16, 3, 15, 4, 14, 17, 1};
    vector<vector<int>> c(n+1, vector<int>(n+1, 0));

    int eredmeny = optimumErtek(n, a, c);
    cout << "Eredmeny: " << eredmeny << endl;
    return 0;
}
