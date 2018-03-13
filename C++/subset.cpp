#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <numeric>
using namespace std;
list <int> sumValues;
void sumOfValues (list<int> results, int sum){
  results.unique();
  for(int x: results){
    sum += x;
  }
  cout << sum << endl;
}
void addValue (vector<int> v, int subSize){
  int subEnd = v.size() - subSize;
  int sum = accumulate(v.begin(),v.end()-subEnd, 0);
  sumValues.push_back(sum);
}

int main() {
  // int n, m, values; // n is the size of the array and m is the size of the subset
  // cin >> n >> m;
  // int subsetSize = m; // don't really need this but I rather have it
  // vector <int> v;
  // vector <int> temp = v;
  // for (int x = 0; x < n; x++){
  //   cin >> values;
  //   v.push_back(values);
  // }

  /** This is temp code for testing purposes only **/
  int subSize = 4;
  vector<int> v = {1,2,3,4,5,6,7,8,9,10}; // original only change when done with location in subset for loop
  vector<int> temp = v; // constantly changes and reset by original
  /** End of temp code **/

  while (temp.size() != subSize){
    addValue(temp, subSize); // calculate sum in subset and add it to List

    for (int x = subSize-1; x > 0; x--){ // location in the Subset
      int cycle = subSize - x;
      if (cycle > 1){
        temp.erase(temp.end()-(temp.size() - x)); // Remove value in Subset
        addValue(temp, subSize);
      }
      while (cycle > 0){
        int rotateValue = subSize;
      while (rotateValue < temp.size()){

      }
      cycle--;
    }
    }
  }


  return 0;
}
