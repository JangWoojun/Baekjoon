#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin >> a >> b;
    int  array[a];

    for (int i = 0; i<a; i++){
        cin >> array[i];
    }

    for (int i = 0; i < sizeof(array) / sizeof(int); i++){
        if (array[i]<b){
            cout << array[i] << " ";
        }
    }
    
    

    

}
