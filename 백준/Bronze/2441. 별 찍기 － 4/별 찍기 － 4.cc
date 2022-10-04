#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;

    for (int i = 0; i<a; i++){
        for (int l = 0; l < i; l++){
            cout << " ";
        }

        for (int j = a; j > i; j--){
            cout << "*";
        }
        cout << "\n";
    }
    

}
