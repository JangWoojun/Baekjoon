#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,a1,a2,b,count,value;
    int i = 1;

    value = 0;

    cin >> a;
    

    if (a<10) {
        a1 = 0;
        a2 = a;
    }
    else {
        a1 = a/10;
        a2 = a%10;
    }

    if (a == 0){
        count = i;
    }
    else {
        for (i= 1; value!=a; i++){
            b = a1+a2;
            if (b>=10){
                value = a2*10+b%10;;
                a2 = value%10;
                a1 = value/10;
            }
            else {
                value = a2*10+b;
                a2 = value%10;
                a1 = value/10;
            }
            count = i;
        }
    }

    printf ("%d",count);


}
