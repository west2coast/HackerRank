#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int tallest = *max_element(ar.begin(),ar.end());
    int blowOut = count(ar.begin(),ar.end(),tallest);
    return blowOut;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
