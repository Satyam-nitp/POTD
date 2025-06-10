#include <bits/stdc++.h>
using namespace std;

int maxDifference(string s) {
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    int maxOdd = INT_MIN, minEven = INT_MAX;
    for (int f : freq) {
        if (f == 0) continue;
        if (f % 2 == 0)
            minEven = min(minEven, f);
        else
            maxOdd = max(maxOdd, f);
    }
    return maxOdd - minEven;
}

int main(){
    string s="abcabcab";
    cout<<maxDifference(s)<<endl;
}