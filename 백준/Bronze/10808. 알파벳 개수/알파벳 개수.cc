#include <bits/stdc++.h>
using namespace std;
string s;
vector<int>v(26, 0);

int main() {
    cin >> s;

    for(char c : s) v[c - 'a']++;
    for(auto it: v) cout << it << " ";
    
    return 0;
}