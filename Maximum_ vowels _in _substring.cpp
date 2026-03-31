#include <bits/stdc++>
using namespace std;
int maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a','e','i','o','u'};
    int count = 0, maxCount = 0;

for(int i =0 ; i<k ;i++){
  if (vowels.count(s[i])) count++;
}
maxCount = count;
for (int i = k ; i<s.size(); i++){
  if (vowels.count(s[i])) count++;           // add new char
        if (vowels.count(s[i-k])) count--;         // remove old char
        maxCount = max(maxCount, count);
    }

    return maxCount;
}




