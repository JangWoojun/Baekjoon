#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int num [9];
	int n = 0;
	int s;

	for (int i = 0; i < 9; i++){
		cin >> s;
		num[i] = s;
		n+=s;
	}

	int chk = n;
	
	for (int i = 0; i < 9; i++){
		chk -= num[i];
		for (int j = 0; j < 9; j++){
			if(i==j){
				continue;
			}
			else if (chk-num[j]==100){
				for (int l = 0; l < 9; l++){
					if(l!=j and l != i){
						cout << num[l] << "\n";
					}
				}
				return 0;
			}
			
		}
		chk+=num[i];
	}
	


	
	
}