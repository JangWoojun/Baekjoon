#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int array [30] = {0,};

    for (int i = 0;  i < 28; i++ ){
        cin >> a;
        array[a-1] = a;
    }
    

    for (int i =0; i<30; i++){
        if (array[i]==0){
            cout << i+1 << endl;
        }
    }


    

}
