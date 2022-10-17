#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int count= 0;
    int num[5] = {0,};

    for (size_t i = 0; i < 5; i++){
        cin >> n;
        count+=n;
        num[i]=n;
    }
    
    cout << count/5 << "\n";

    sort(num,num+5);

    cout << num[2];
    
    
    
}