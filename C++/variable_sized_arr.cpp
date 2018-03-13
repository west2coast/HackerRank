#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int> > arr;
    int ans, ques;
    cin >> ans >> ques;
    for (int x = 0; x < ans; x++){
        int size;
        cin >> size;
        vector<int> temp;
        for (int y = 0; y < size; y++){
            int num;
            cin >> num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    for (int m = 0; m < ques; m++){
        int row, loc;
        cin >> row >> loc;
        cout << arr[row][loc] << endl;
    }
    return 0;
}
