#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int n,m,a;
    int chk = 0;

    cin >> n >> m;
    
    int num[n];

    for (size_t i = 0; i < n; i++){
        cin >> a;
        num[i]=a;
    }

    for (size_t i = 0; i < sizeof(num)/sizeof(int); i++){
        for (size_t l = 0; l < sizeof(num)/sizeof(int); l++){
            if (num[i]!=num[l] and num[i]+num[l]==m){
                chk++;
                num[i]=-100000;
                num[l]=-100000;
            }
            else {
                continue;
            }
        }
        
    }
    
    cout << chk;

    





}