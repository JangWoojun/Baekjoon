#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int n,m;

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> m;

        int num[m];

        for (int j = 0; j < m; j++){
            cin >> num[j];
        }

        sort(num,num+m);

        cout << "Class " << i+1 << "\n";

        cout << "Max " << num[m-1] << ", " << "Min " << num[0] << ", ";

        cout << "Largest gap ";

        int chk = 0;

        for (int l = (m-1); l > 0; l--){
            if (num[l]-num[l-1]>chk){
                chk = num[l]-num[l-1];
            }
        }
        
        cout << chk << "\n";

    }
    
    

}