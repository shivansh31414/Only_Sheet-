// brute force 
bool isPow2(int n) {
  if (n==0) return false;
  while (n !=1) {
    if(n %2 != 0) return false;
    n = n/2
  }
return true

// briankernighansalo approach
bool isPow2(int n){
  if(n==0) return false;
  if(n & (n-1) == 0) return true;
}
