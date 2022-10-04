#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	string s1,s2;

    cin >> t;

   	for(int i = t; t>0; t--){

        map<string, int> map;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> s1 >> s2;
            map[s2]++;
        }

        long long plus = 1;

        for(auto c : map){
            plus *= ((long long)c.second + 1);
        }

        plus-=1;
		
        cout << plus << "\n";

    }
}
