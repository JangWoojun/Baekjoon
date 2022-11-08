#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    const int mod = 1234567891;
    const int m = 31;

    int l;
    string s;

	cin >> l >> s;

	long long sum = 0;
	long long r = 1;

	for (int i = 0; i < s.length(); i++){
		sum = (sum + (s[i] - 'a' + 1) * r) % mod;
		r = (r*m) % mod;
	}

	cout << sum << "\n";
    
}