#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int n,p,num;

    cin >> n;

    string s;
    map<int,string> m;

    for (int i = 0; i<n; i++){
        cin >> p;
        int max =-1;
        for (size_t j = 0; j < p; j++){
            cin >> num >> s;
            if (num>max){
                max=num;
                m[num]=s;
            }
        }
        cout << m[max] << "\n";
    }

}