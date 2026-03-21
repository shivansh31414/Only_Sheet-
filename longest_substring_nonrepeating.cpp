#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
   unordered_map<char, int> lastSeen;
   int start =0;
   int maxlen =0 ;
  for(int i =0; i<s.size();i++) {
    char ch = s[i];
    if(lastSeen.find(ch) != lastseen.end() &&lastSeen[ch] >= start) {
        start = lastSeen[ch] + 1;
    }

        lastSeen[ch] = i; // update last seen index
        maxLen = max(maxLen, i - start + 1);
    }

    return maxLen;
}
