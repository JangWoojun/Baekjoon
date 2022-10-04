#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;

    int count = 0;

    int array [a*b];
    int array1 [a*b];
    int array2 [a*b];

    for (int i = 0; i<a*b; i++){
        cin >> c;
        array [i] = c;
    }

    for (int i = 0; i<a*b; i++){
        cin >> c;
        array1 [i] = c;
    }

    for (int i = 0; i<a*b; i++){
       array2[i] = array[i]+array1[i];
    }

    for (int i = 0; i<a*b; i++){
        count ++;
        if (count % 3 == 0){
        cout << array2[i];
        cout << "\n";
        }
        else {
            cout << array2[i];
            cout << " ";
        }
    }

    
}
