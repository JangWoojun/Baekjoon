#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int k,p,m,n;

	cin >> k;

	for (int i = 0; i < k; i++){

		cin >> p >> m;
		bool num[500] = {0,};

		int chk = 0;

		for (int l = 0; l < p; l++){
			cin >> n;

			if(num[n-1] == 0){
				num[n-1] = true;
			}
			else {
				chk++;
			}
		}


		cout << chk << "\n";

	}
	
}