#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    int n;
    string s;

    cin >> n;

    for (size_t i = 0; i < n; i++){
        cin >> s;
        if (s.length()>=6 and s.length()<=9){
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    
}