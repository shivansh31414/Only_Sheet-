#include <bits/stdc++.h>
using namespace std;

vector<int> unionArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            result.push_back(a[i]);
            i++; j++;
        }
        else if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        }
        else {
            result.push_back(b[j]);
            j++;
        } 
    }

    // Add remaining elements
    while (i < a.size()) {
        result.push_back(a[i++]);
    }
    while (j < b.size()) {
        result.push_back(b[j++]);
    }

    return result;
}
