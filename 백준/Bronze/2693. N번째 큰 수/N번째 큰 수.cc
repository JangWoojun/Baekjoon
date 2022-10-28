#include <bits/stdc++.h>
using namespace std;
bool desc(int a, int b){ 
  return a > b; 
}
int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int a[10];

	int t;

	cin >> t;

	for (size_t l = 0; l < t; l++){
		for (size_t i = 0; i < 10; i++){
			cin >> a[i];
		}	
		sort(a,a+10,desc);
		cout << a[2] << "\n";
	}

}