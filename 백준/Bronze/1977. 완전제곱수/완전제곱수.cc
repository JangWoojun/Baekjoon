#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int min = 100001; 
	int m,n; 
	int sum = 0; 
	int count = 0;

    cin >> m >> n;

	for (int j = 1; j <= 100; j++){
		if(j*j >= m&&j*j <= n){
			sum += j*j;
			count++;
		}
		if (j*j >= m&&j*j <= n&&min > j*j){
			min = j*j;
			
		}
	}

	if (count == 0){
		cout << "-1";
		return 0;
	}

    cout << sum << '\n' << min;
    
}


