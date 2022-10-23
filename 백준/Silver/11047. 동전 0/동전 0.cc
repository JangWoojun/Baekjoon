#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n,k;
	cin >> n >> k;
	
	vector<int> v(n);

	for(int i = 0; i<n; i++) {
		cin >> v[i];		
	}
	int c = 0;
	for(int i = n-1; i >= 0; i--) {
		c = c + k / v[i];
		k = k % v[i];
		
		if(k==0){
            break;	
	    }
    }
	cout << c;
}