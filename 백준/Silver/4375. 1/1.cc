#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    long long a;

    while (cin >> a){
        int s = 1;
        int chk = 1;
        while (true){
            if (s%a==0){
                cout << chk << "\n";
                break;
            }
            else {
                s = (s*10)+1;
                s%=a;
                chk++;
            }
        }
    }
    

    


}