#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int a;
	cin >> a;

	for (int i = 0; i<a; i++){
		for (size_t j= 0; j < i; j++){
			cout << " ";
		}
		for (size_t l = 1; l <= (2 * (a - i)) - 1; l++){
			cout << "*";
		}
		cout << "\n";
	}
}