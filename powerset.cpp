#include <iostream>
#include <vector>
using namespace std;

void powerSet(vector<int> &arr) {
  int n = arr.size();
  int total = 1 << n;
  for(int mask = 0; mask < total; mask++) {
      cout  << "{";
      for(int i = 0; i < n; i++){
          if(mask & (1 << i ) {
              cout << arr[i[ << "";
          }
      }
  }
}
