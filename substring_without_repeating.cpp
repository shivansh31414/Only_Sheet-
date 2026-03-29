#include <bits/stdc++.h>
using namespace std;
int lenghtlongestsubstring(string s) {
  unordered_set<char> window;
  int left = 0, maxLen = 0;
  
    for (int right = 0; right < s.size(); right++) {
        // If duplicate found, shrink window from left
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }
        // Add current character
        window.insert(s[right]);
        // Update max length
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
