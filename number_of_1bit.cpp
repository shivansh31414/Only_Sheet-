class Solution {
public :
int hammingweihts(int n){
int count =0;
while(n) {
n = n & (n-1) ;
count ++
  }
return count;
}
};
