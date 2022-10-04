#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int count;

    cin >> count;

    

    for (size_t i = 0; i < count; i++){
        int n;
        string s;
        cin >> n >> s;

        n=n-1;

        for (size_t j = 0; j < s.length()-1; j++){
            if (j>=n){
                cout << s[j+1];
                
            }
            else {
                cout << s[j];
            }
        }
        
        cout << "\n";
    }
    



}