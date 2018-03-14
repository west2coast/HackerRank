#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool IsNeg (int x){
    return (x < 0);
}
bool IsPos (int x){
    return (x > 0);
}
void plusMinus(vector <int> arr) {
    double countZero = count(arr.begin(),arr.end(), 0);
    double countPos = count_if(arr.begin(),arr.end(), IsPos);
    double countNeg = count_if(arr.begin(),arr.end(), IsNeg);
    cout << setprecision(6) << (countPos/arr.size()) << '\n';
    cout << setprecision(6) << (countNeg/arr.size()) << '\n';
    cout << setprecision(6) << (countZero/arr.size());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
