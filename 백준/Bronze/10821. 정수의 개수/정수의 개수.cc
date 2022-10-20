#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    string s;

    int chk = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == ',')
            chk++;
    }
    
    cout << chk + 1 << '\n';
    

}