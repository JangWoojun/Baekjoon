#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int a,b;
    int num[1200] = {0,};
    int chk = 1;

    cin >> a >> b;

    for (int i = 1; i <= 45; i++){
        for (int j = 0; j < i; j++){
            num[chk]=i;
            chk++;
        }
    }
    
    int count = 0;
    
    for (int i = a; i <= b; i++){
        count += num[i];
    }

    cout << count;


}