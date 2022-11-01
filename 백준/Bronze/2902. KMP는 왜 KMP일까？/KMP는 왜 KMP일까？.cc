#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	string n;
	cin >> n;

	for (int i = 0; i < n.length(); i++){
		if(i==0 or n[i-1]=='-'){
			cout << n[i];
		}
	}
	
	
}