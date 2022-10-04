#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[9];

    int b;
    int max = -100000;
    int count;

    
    for (int i = 0; i < 9; i++){
        cin >> b;
        array[i] = b;
    }

    for (int i = 0; i < 9; i++){
        if (array[i] > max ){
            max = array[i];
            count = i;
        }
        else {
            continue;
        }
    }

    cout << max << "\n" << count+1;

}
