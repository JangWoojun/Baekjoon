#include <bits/stdc++.h>
using namespace std;

int d(int a, int b){
    if (a % b == 0){
        return b;
    }
    return d(b, a % b);
}

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int a, b;
    int sum = 0;
    cin >> a >> b;
 
    if (a >= b){
        sum=d(a, b);
    }
    else {
		sum=d(b, a);
	}
    cout << sum << "\n";
    cout << a * b / sum << "\n";
    
}


