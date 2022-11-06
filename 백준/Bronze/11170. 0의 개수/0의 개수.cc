#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++){
 
    int n,m;
    cin >> n >>m;
 
    int count=0;
 
        for(int i=n; i<=m; i++){
            string s = to_string(i); 
            for(int j = 0; j < s.length(); j++){
                if(s[j] == '0'){
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
	
}