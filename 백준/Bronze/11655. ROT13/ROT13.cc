#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
    getline(cin, s);
    
    for(auto it: s) {
        if(it < 65 || 122 < it) cout << it;
        
        if(it > 64 && it < 91) {
            if(it+13 > 90) cout << char(it+13-26);
            else cout << char(it+13);
        } else if(it > 96 && it < 123) {
            if(it+13 > 122) cout << char(it+13-26);
            else cout << char(it+13);
        }
    }
    

    return 0;
}