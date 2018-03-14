#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool NotLate(int x){
    return ((x <= 0) || (x == 0));
}
string angryProfessor(int k, vector <int> a) {
    int onTime = count_if(a.begin(),a.end(),NotLate);
    if (onTime >= k)
        return "NO";
    else
        return "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}
