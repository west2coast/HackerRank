#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    vector <int> result;
    int arr[] = {a0,b0,a1,b1,a2,b2};
    int aCount = 0, bCount = 0;
    for (int x = 0; x < 6; x++){
        int temp = x + 1;
        if (arr[x] > arr[temp]){
            aCount++;
        }else if (arr[x] < arr[temp]){
            bCount++;
         }
        x = temp;
    }
    result.push_back(aCount);
    result.push_back(bCount);
    return result;

}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
