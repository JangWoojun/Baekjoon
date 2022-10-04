#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	int num[n];

	int a;

	for (size_t i = 0; i < n; i++){
		cin >> a;
		num[i]=a;
	}

	int count = 0;
	int rv=1;

	for (size_t i = 0; i < n; i++){
		if(num[i]==1){
			count+=rv;
			rv++;
		}
		else {
			rv=1;
		}
	}
	
	cout << count;
	
}