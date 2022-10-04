#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;

    cin >> n;

    for (int i = 0; i < n.length(); i++){
        if (char(n[i])<90){
            cout << char(n[i]+32);
        }
        else {
            cout << char(n[i]-32);
        }
    }
    



}
