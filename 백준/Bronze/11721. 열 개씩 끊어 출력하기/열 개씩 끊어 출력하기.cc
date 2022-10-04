#include <bits/stdc++.h>
using namespace std;
int main(){

    string sum;

    cin >> sum;

    for (int i = 0; i < sum.length(); i++){
        if ((i+1)%10==0){
            cout << sum [i] << "\n"; 
        }
        else {
            cout << sum[i];
        }
    }
    

}
