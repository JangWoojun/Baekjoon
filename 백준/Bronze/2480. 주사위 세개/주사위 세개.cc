#include <bits/stdc++.h>
using namespace std;
int main(){
    long a,b,c;

    cin >> a >> b >> c;

    if (a==b or c == b or a == c){
        if (a==c and a == b and b == c){
            cout << 10000+a*1000;
        }
        else {
           if (a == b){
            cout << 1000+a*100;
           }
           else if (a == c){
            cout << 1000+a*100;
           }
           else {
            cout << 1000+b*100;
           }
        }
    }
    else {
        if (a>b and a>c){
            cout << 100*a;
        }
        else if (b>a and b>c){
            cout << 100*b;
        }
        else {
            cout << 100*c;
        }
    }

}
