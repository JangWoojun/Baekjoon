#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	string n;
	string chk;
	int m;
	cin >> n >> m;

	for (int i = 0; i < stoi(n); i++){
		chk+=n;
	}

	if (chk.length()>m){	
		cout << chk.substr(0,m);
	}
	else {
		cout << chk;
	}
	
}