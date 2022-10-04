#include <bits/stdc++.h>
using namespace std;
int main(){
    long a,b,c,d,f;

    cin >> a >> b;

    f=0;

    for (int i = 1; i<=b; i++){
        cin >> c >> d;
        f+=c*d;
    }
    if (a==f){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
