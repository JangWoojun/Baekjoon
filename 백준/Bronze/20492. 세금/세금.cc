#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	long long n;

	cin >> n;

	cout << (n/100)*78 << " " << n-(((n/100)*20)/100)*22;
}