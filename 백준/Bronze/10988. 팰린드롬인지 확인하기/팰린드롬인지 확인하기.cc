#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    int f = 0;
    int e = s.length()-1;

    char sum[s.length()];

    for (int i = 0; i<s.length(); i++){
        sum[i]=s[i];
    }

    int chk = 0;

    for (size_t i = 0; i < s.length()/2; i++){
        if (sum[f]==sum[e]){
            f++;
            e--;
        }
        else {
            chk++;
        }

    }
    

    if (chk!=0){
        cout << 0;
    }
    else {
        cout << 1;
    }



}