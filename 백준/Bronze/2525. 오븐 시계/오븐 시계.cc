#include <bits/stdc++.h>
using namespace std;
int main(){
    long h,m,c;

    cin >> h >> m >> c;

    long a,b;

    a=(m+c)/60;
    b=(m+c)%60;

    if (m+c>59){
        if (h+a >= 24){
            cout << (a+h)-24 << " " << b;
        }
        else {
            cout << h+a << " " << b;
        }
    }
    else {
        cout << h << " " << m+c ;
    }
}
