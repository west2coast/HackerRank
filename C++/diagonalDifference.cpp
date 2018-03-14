#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    int primary = 0, secondary = 0;
    int locPrim = 0, locSec = a.size() - 1;
    for (int x = 0; x < a.size(); x++){
        primary += a[x][locPrim++];
        secondary += a[x][locSec--];
    }

    return abs(primary - secondary);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
