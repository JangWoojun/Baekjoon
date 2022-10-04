#include <bits/stdc++.h>
using namespace std;

int n,m;
string s;
map<string, int> map1;
map<int, string> map2;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL);

	
	cin >> n >> m;

    for (size_t i = 1; i <= n; i++){
        cin >> s;

        map1[s]=i;
        map2[i]=s;
    }

    for (size_t l = 1; l <= m; l++){
        cin >> s;
        if (atoi(s.c_str())==0){
            cout << map1[s]<< "\n";
        }
        else {
            cout << map2[atoi(s.c_str())] << "\n";
        }
    }
    
    
}