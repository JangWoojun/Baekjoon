#include <bits/stdc++.h>
using namespace std;
int main(){

    int y = 1;
    int m,d;

    int num,sum;

    cin >> m >> d;

        if (m==1){
        num = 6;
        sum = y+num+d;
    }
    else if (m==2){
        num = 2;
        sum = y+num+d;
    }
    else if (m==3){
        num = 2;
        sum = y+num+d;
    }
    else if (m==4){
        num = 5;
        sum = y+num+d;
    }
    else if (m==5){
        num = 0;
        sum = y+num+d;
    }
    else if (m==6){
        num = 3;
        sum = y+num+d;
    }
    else if (m==7){
        num = 5;
        sum = y+num+d;
    }
    else if (m==8){
        num = 1;
        sum = y+num+d;
    }
    else if (m==9){
        num = 4;
        sum = y+num+d;
    }
    else if (m==10){
        num = 6;
        sum = y+num+d;
    }    
    else if (m==11){
        num = 2;
        sum = y+num+d;
    }
    else {
        num = 4;
        sum = y+num+d;
    }

    if (sum%7==0) {
        cout << "SUN";
    }
    else if (sum%7==1) {
        cout << "MON";
    }
    else if (sum%7==2) {
        cout << "TUE";
    }
    else if (sum%7==3) {
        cout << "WED";
    }
    else if (sum%7==4) {
        cout << "THU";
    }
    else if (sum%7==5) {
        cout << "FRI";
    }
    else {
        cout << "SAT";
    }


}
