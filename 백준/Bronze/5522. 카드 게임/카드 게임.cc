#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int count = 0;
	int a;

	for (size_t i = 0; i < 5; i++){
		cin >> a;
		count+=a;
	}
	
	cout << count;
	
}