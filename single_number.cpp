int issingle_number(vector<int>& nums) {
  res = 0;
  for (int num : nums) res =  ^ num;
  return res;
} 
