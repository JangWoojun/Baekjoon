#include <bits/stdc++.h>
using namespace std;
int main(){

    long a,b;

    cin >> a >> b;

    if (a<0){
            a = a*-1;
            if (b<0){
                b = b*-1;
                if (a>b){
                    cout << a-b;
                }
                else {
                    cout << b-a;
                }
            }
            else {
                cout << b+a;
            }
        }
        else {
            if (b<0){
                b = b*-1;
                cout << a+b;
            }
            else {
                if (a>b){
                    cout << a-b;
                }
                else cout << b-a;
            }   
    }

}
