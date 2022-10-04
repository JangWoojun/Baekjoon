#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    long long a,b,c;
    long long chk = 1;

    cin >> a >> b >> c;

    if (b>=c){
        cout << -1;

        return 0;
    }
    else {
        cout << a/(c-b)+1;
        return 0;
    }


    
    
}