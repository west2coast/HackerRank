#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

void miniMaxSum(vector <int> arr) {
    vector <u_int64_t> arrSum;
    u_int64_t sum = accumulate(arr.begin(),arr.end(),0);
    for (int x = 0; x < arr.size(); x++){
        u_int32_t temp = sum - arr.at(x);
        arrSum.push_back(temp);
    }
    auto result = minmax_element(arrSum.begin(), arrSum.end());
    cout << *result.first << " " << *result.second;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
