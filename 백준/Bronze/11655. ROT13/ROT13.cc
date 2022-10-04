#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;

    getline(cin,s);

    for (size_t i = 0; i < s.length(); i++){
        if (int(s[i])>47 and 58 > int(s[i])){
            cout << char(int(s[i]));
        }
        else if (int(s[i])!=32){
            if (int(s[i])>77 and int(s[i])<91){
                cout << char(int(s[i])-13);
            }
            else if (int(s[i])>109){
                cout << char(int(s[i])-13);
            }
            else {
                cout << char(int(s[i])+13);
            }
            
        }
        else {
            cout << " ";
        }
    }

}