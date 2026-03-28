#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>&arr, int k) {
  int n = arr.size();
  if(n < k) return -1;

  int windowSum = 0;
  for (int i = k ; i < n ; i++){
      window += arr[i];
  }
int maxSum = windowSum;
for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // add new, remove old
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}
