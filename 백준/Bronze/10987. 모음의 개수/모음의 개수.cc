#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    string s;

    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++){
        switch (s[i]){
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        default:
            break;
        }
    }
    cout<< count;
    
}