#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    string s;
	
    while (1){
        getline(cin, s);
        if(s=="END"){
            break;
        }
        reverse(s.begin(),s.end());

        cout << s << "\n";
    }

	
}