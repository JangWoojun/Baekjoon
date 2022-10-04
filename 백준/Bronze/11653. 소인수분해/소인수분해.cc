#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int n;
    
    cin >> n;

    int count = 2;

    if (n!=1){
        while (n>1){
            if (n%count==0){
                cout << count << "\n";
                n=n/count;
            }
            else {
                count++;
            }
        }
        
    }
}