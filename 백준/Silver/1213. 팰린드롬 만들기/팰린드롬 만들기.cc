#include <bits/stdc++.h>
using namespace std;

string a;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int list[26]={0, };

    cin >> a;
// 문자열 담는 칸

    for (size_t i = 0; i < a.length(); i++){
        for (size_t l = 0; l < 26; l++){
            if (a[i]==char(l+65)){
                list[l]++;
            }
        }
    }

// 펠린드롬 가능 판단

    int chk = 1;
    for (size_t i = 0; i <26; i++){
        if (list[i]==0){
            continue;
        }
        else if (list[i]%2!=0){
            chk--;
        }
        else {
            continue;
        }
    }
    // 최종 문자 담기
    char p[a.length()];
    int f = 0;
    int e = a.length()-1;

    if (chk<0){
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    else {
        for (size_t i = 0; i < 26; i++){
            if(list[i]%2!=0) {
                p[a.length()/2]=char(i+65);
                list[i]--;
            }     
            if (list[i]%2==0){
                for (int l = 0; l<list[i]/2; l++){
                    p[f]=char(i+65);
                    p[e]=char(i+65);
                    f++;
                    e--;
                }       
        }
    }
    
}
    for (size_t j = 0; j < a.length(); j++){
            cout << p[j];
        }
    return 0;
}