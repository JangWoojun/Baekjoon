#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++){
		cout << (int)a.find(alphabet[i]) << " ";
	}
	


}

