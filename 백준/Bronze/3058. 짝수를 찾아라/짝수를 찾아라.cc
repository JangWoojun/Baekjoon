#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    int t;
    int a;
    cin >> t;

    for (size_t i = 0; i < t; i++){
        int min = 101;
        int end = 0;
        for (size_t j = 0; j < 7; j++){
            cin >> a;
            if (a%2==0){
                if (min>a){
                    min=a;
                }
                end+=a;
            }
        }
        cout << end << " " << min << "\n";
    }
    

}