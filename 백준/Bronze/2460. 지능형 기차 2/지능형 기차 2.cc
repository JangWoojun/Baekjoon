#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    int count = 0;
    int a,b;
    int max = 0;

    while (cin >> a >> b){
        count-=a;
        count+=b;
        if (count>max){
            max=count;
        }
    }
    cout << max;
    
}