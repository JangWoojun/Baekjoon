#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int num[21];

	num[0] = 0;
	num[1] = 1;

	for (int i = 2; i < 21; i++){
		num[i]=(num[i-1]+num[i-2]);
	}
	
	int n;

	cin >> n;

	cout << num[n];

}