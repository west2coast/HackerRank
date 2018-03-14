#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    for (int x = 0; x < n; x++){

        int count = 0;
        int step = n - x;
        while (count <= x){
            if(count == 0){
                cout.width(step); cout << right << "#";
            }else{
                cout << right << "#";
            }
            count++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
