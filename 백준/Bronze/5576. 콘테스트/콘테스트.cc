#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int a[10] = {0,};
	int b[10] = {0,};

	int c;

	for (int i = 0; i < 10; i++){
		cin >> c;
		a[i] = c;
	}

	for (int i = 0; i < 10; i++){
		cin >> c;
		b[i] = c;
	}
	
	sort(a,a+10);
	sort(b,b+10);

	int a1 = a[7]+a[8]+a[9];
	int b1 = b[7]+b[8]+b[9];

	cout << a1 << " " << b1;

}