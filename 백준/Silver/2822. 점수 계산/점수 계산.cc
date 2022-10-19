#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int num[8] = {0,};
    int chk[8] = {0,};

    int n;

    for (int i = 0; i < 8; i++){
        cin >> n;

        num[i] = n;
        chk[i] = n;
    }

    sort(chk,chk+8);

    int count = 0;

    for (int i = 3; i < 8; i++){
        count+=chk[i];
    }

    cout << count << "\n";

    for (int i = 0; i < 8; i++){
        for (int j = 3; j < 8; j++){
            if(num[i]==chk[j]){
                cout << i+1 << " ";
            }
        }
        
    }
    
    

}