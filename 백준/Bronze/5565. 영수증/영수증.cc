#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int t = 0;
	int b[9] = {0,};
	int s = 0;

	cin >> t;
	for (int i = 0; i < 9; i++){
		cin >> b[i];
		s += b[i];
	}
	cout << t - s;
    
}


