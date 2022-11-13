#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n, m;
	int sum = 0;
    int min = -1;
	int count = 0;

	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				count++;
		}
		if (count == 2) {		
			if (min == -1)		
				min = i;
			sum += i;
		}
		count = 0;
	}
	if (min == -1){
		cout << -1 << '\n';
    }
	else {
        cout << sum << '\n' << min << '\n';
    }
    
}


