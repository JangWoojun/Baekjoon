#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    string s;    

    while (cin >> s){
        bool end_chk = true; 

        bool chk1 =false;


        if(s=="end"){
            break;
        }

        for (size_t i = 0; i < s.length(); i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                chk1=true;
            }
        }

        if (chk1 == false){
            end_chk =false;
        }

        bool chk2[s.length()];
        char chk3[s.length()];

        if (s.length()>2){
            if (end_chk==true){
                    for (size_t i = 0; i < s.length(); i++){
                        if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                            chk2[i]=true;
                        }
                        else {
                            chk2[i]=false;
                        }
                        chk3[i]=s[i];
                }
                
                for (size_t i = 0; i < s.length()-2; i++){
                    if(chk2[i]==chk2[i+1] and chk2[i] == chk2[i+2]){
                        end_chk = false;
                    }
                }
                
            }
        }


        
        if(s.length()>1){
            if (end_chk==true){
                for (size_t i = 0; i < s.length()-1; i++){
                    if(chk3[i]=='o' or chk3[i]=='e'){
                        continue;
                    }
                    else if (chk3[i]==chk3[i+1]){
                        end_chk = false;
                    }
                    else {
                        continue;
                    }
                }
            }
        }
        

        
        if (end_chk == true){
            cout << "<" << s << ">" << " is acceptable.\n";
        }
        else {
            cout << "<" << s << ">" << " is not acceptable.\n";
        }
    
        
    }
    



}