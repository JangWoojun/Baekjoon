#include <bits/stdc++.h>
using namespace std;
string s;
vector<int>v(26, 0);

int main() {
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        v[(int)s[i] - 97]+=1;
    }
    
    for(auto it: v) cout << it << " ";
    
    return 0;
}