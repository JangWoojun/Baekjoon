#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int a;

    while (cin >> a){
        if (a==0){
            return 0;
        }        
        string b = to_string(a);

        int f = 0;
        int e = b.length()-1;

        int chk = 0;

        for (int i = 0; i<b.length()/2; i++){
            if (b[f]==b[e]){
                f++;
                e--;
            }
            else {
                chk++;
            }
        }

        if (chk==0){
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    



}