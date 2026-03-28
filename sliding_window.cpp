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
// Maximum Sum of Subarray of Size K
// - Maximum Average of Subarray of Size K
//  Maximum vowels in substring of size k
//  - Types of Sliding Window
//  - Longest substring without repeating character
//  - Longest substring with k distinct characters
//  - Identify Sliding window capability
//  - Fruits into baskets
//  - Minimum size subarray sum
//  - Maximum Consecutive Ones
//  - Components of Sliding Window
//  - Identify sliding window opportunity
