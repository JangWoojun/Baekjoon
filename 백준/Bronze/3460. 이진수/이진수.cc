#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int t,n;
    
    cin >> t;
    
    for (int j = 0; j < t; j++){
        cin >> n;

        int k=0;

        while(n>0){
            if(n%2==1){
                cout << k << " ";
            }
            n/=2;
            k++;
        }
    }


}