#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    int s,e;
    int chk[100] = {0, };
    int money = 0;

    cin >> a >> b >> c;


    for (int i = 0; i < 3; i++){
        cin >> s >> e;
        for (int j = s; j < e; j++){
            chk[j]++;
        }       
    }
    
    for (int i = 0; i<100; i++){
        if (chk[i]==0){
            continue;
        }
        else if (chk[i]==1){
            money = money + a;
        }
        else if (chk[i]==2){
            money = money + b*2;
        }
        else if (chk[i]==3){
            money = money + c*3;
        }
        else {
            continue;
        }
    }
    cout << money;
}