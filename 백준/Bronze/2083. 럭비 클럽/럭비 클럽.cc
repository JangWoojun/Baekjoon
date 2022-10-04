#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	string s;
	int a,b;

	while (cin >> s >> a >> b){
		if (a==0 and b==0){
			break;
		}
		else if (a>17 or b>=80){
			cout << s << " Senior" << "\n";
		}
		else {
			cout << s << " Junior" << "\n";
		}
	}
	
}