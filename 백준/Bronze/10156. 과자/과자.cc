#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	double a, b, c;
    cin >> a >> b >> c;
    if (a*b > c)
        cout << a*b - c << '\n';
    else
        cout << "0" << '\n';
    
}
