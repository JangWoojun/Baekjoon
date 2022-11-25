#include <bits/stdc++.h>
using namespace std;

int d(int x, int y){
    if (x % y == 0)
        return y;
    else
        return d(y, x % y);
}

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n;
    int a, b;
    cin >> n;
 
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a >= b){
            cout << a * b / d(a, b) << "\n";
        }
        else
            cout << a * b / d(b, a) << "\n"; 
    }
    
}
