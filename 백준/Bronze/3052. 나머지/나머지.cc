#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,num[10];
    int count = 0;

    for (int i = 0; i<10; i++){
        cin >> a;
        num[i]=a%42;
    }

    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            if (j==i){
                continue;
            }
            else if (num[i]==num[j]){
                num[j]=-1;
            }
            else {
                continue;
            }
        }
    }
    
    for (int l = 0; l < 10; l++){
        if (num[l]>-1){
            count++;
        }
        else {
            continue;
        }
    }
    
    cout << count;

}
