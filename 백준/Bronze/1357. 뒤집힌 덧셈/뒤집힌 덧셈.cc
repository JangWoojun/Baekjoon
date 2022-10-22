#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    string x,y,z;
    int x1,y1,z1;
    cin >> x >> y;
    
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    
    x1 = stoi(x);
    y1 = stoi(y); 

    z = to_string((x1+y1));

    reverse(z.begin(),z.end());

    z1 = stoi(z);

    cout << z1;
}