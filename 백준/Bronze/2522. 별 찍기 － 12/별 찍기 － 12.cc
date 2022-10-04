#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;

    for (int i = 1; i < a; i++){
        for (int j = a; j > i; j--){
            cout << " ";
        }
        for (int l = 0; l < i; l++){
            cout << "*";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < a; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int l = a; l > i; l--){
            cout << "*";
        }
        cout << "\n";
    }
        
   
   

}
