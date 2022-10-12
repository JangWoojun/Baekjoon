#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    string s;

    cin >> s;

    int num[10]={0,};

    for (size_t i = 0; i < s.length(); i++){
        num[int(s[i])-48]++;
    }

    for (int i = 9; i >= 0; i--){
        if(num[i]!=0){
            for (size_t j = 0; j < num[i]; j++){
                cout << i;
            }
        }
    }
    
    

}