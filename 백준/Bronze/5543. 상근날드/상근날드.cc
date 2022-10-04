#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int max = -50;

    int a,b,c,d,f;

    cin >> a >> b >> c >> d>> f;

    if (a<b and a<c){
        max+=a;
    }
    else if (b<a and b<c){
        max+=b;
    }
    else {
        max+=c;
    }
    
    if (d<f){
        max+=d;
    }
    else {
        max+=f;
    }

    cout << max;

}