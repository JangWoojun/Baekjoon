#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

        int a;
        int chk = 1;
        int max = 0;

    for (size_t i = 0; i < 5; i++){
        int count = 0;
        for (size_t j = 0; j < 4; j++){
            cin >> a;
            count+=a;
        }

        if (count>max){
            max=count;
            chk = i+1;
        }
    }
    cout << chk << " " << max;

}