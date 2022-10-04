#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int count;
    int chk=0;
    
    cin >> count;

    string s;


	for (size_t i = 1; i <= count; i++){
        s=to_string(i);

        int f = int(s[0]);
        int f1 = int(s[1]);

        
        if(s.length()<=2){
            chk++;
        }
        else if(s.length()==3){
            int m = f1-f;
            if (int(s[2])-f1==m){
                chk++;
            }
        }
        
    }
    cout << chk;
    
	
}