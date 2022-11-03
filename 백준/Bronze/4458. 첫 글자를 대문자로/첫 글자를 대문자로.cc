#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    string s;
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
		getline(cin,s);
        
        if ('a' <= s[0] && s[0] <= 'z')
            s[0] -= 32;
        cout << s << '\n';
	}
    

	
}