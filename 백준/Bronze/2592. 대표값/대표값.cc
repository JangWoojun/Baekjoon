#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int max;
    int chk = 0;
    int chk2 = 0;
    map<int,int>m;

    for (size_t i = 0; i < 10; i++){
        cin >> n;
        max+=n;
        m[n]++;
        if(m[n]>chk){
            chk = m[n];
            chk2 = n;
        }       
    }


    cout << max/10 << "\n" << chk2;
    
    
}