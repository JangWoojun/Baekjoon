#include <bits/stdc++.h>
using namespace std;
int main(){
    
	int n;
	string sum;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> sum;
		cout << sum[0] << sum[sum.length()-1] << "\n";
	}
}
