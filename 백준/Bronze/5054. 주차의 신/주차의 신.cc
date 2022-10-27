#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n,c,p;
	cin >> n;

	for (int l = 0; l < n; l++){
		cin >> c;
		int v[c];

		for (int i = 0; i < c; i++){
			cin >> p;
			v[i]=p;
		}
		
		sort(v,v+c);

		cout << (v[c-1]-v[0])*2 << "\n";
	}
	
	
}