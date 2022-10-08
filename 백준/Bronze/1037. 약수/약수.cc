#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int ns[51];
    int s;
    int min = 1000001;
    int max = 1;

    cin >> n;

    for (size_t i = 0; i < n; i++){
        cin >> s;
        ns[i] = s;
    }



    for (size_t i = 0; i < n; i++){
        if(ns[i]>max){
            max=ns[i];
        }

        if(ns[i]<min){
            min=ns[i];
        }

    }
    cout << max*min;
    
    
}