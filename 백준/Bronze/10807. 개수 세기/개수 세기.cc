#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    int count = 0;

    cin >> a ;

    int array [a];

    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        cin >> array[i];
    }

    cin >> b;

    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        if (array[i] == b){
            count ++;
        }
    }

    cout << count ;

}
