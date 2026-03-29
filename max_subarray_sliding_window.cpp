#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>&arr,int k ) {
  int n = arr.size();
  if(n<k) return -1;
  int windowsum = 0;
  for(int i = 0 ; i<k ; i++){
      windowsum += arr[i];
  }
  int maxsum = windowsum;
  for(int i = k ; i<n ; i++) {
      (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add new element, remove old
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}
