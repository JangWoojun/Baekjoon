#include <bits/stdc++.h>
using namespace std;
int main(){

    int count;
    int ox = 1;
    string a;
	int score = 0;

    
    cin >> count;
    
    
    for (int p = 0; p < count; p++){
        
        cin >> a;  

        for (int j = 0; j<a.length(); j++){
            if (a[j]=='O'){
                score+=ox;
                ox++;
            }
            else  {
                ox=1;
                score+=0;
            }
            
        }
        cout << score << "\n";
		score = 0;
		ox=1;
    }
    

}
