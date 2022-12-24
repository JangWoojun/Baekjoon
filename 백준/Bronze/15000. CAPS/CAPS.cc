#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    
    for(auto &c : s) c = c - 'a' + 'A';
    cout << s;

}
