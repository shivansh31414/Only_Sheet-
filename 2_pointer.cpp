#include <bits/stdc++.h>
using namespace std;

bool Twopointersum(vector<int>&arr,int target){
  int left = 0 , right = arr.size()-1;
  while(left<right){
    int sum = arr[left] + arr[right];
    if(sum==target) {
        cout<<"pair found " << endl;
        return true;
    }
    else if (sum < target ) {
          left++;
    }
    else {
        right -- ;
    }
  }
return false;
} 
    
