#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;

   for (int i = 0; i < a; i++){

        for (int j = a-1; j > i; j--){
            cout << " ";
        }
        
        for (int l = 0; l < i+1; l++){
            cout << "*";
        }
        
        for (int o = 0; o < i; o++){
            cout << "*";
        }
        cout << "\n";
        
   }
   

}
