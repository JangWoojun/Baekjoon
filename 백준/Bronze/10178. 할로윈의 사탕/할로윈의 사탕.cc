#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int n, a, b;
    cin >> n;
    while (n--){
        cin >> a >> b;
        cout << "You get " << a / b << " piece(s) and your dad gets "<< a%b << " piece(s)."<<'\n';
    }
}
