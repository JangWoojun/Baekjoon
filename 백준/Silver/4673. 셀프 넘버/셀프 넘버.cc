#include <bits/stdc++.h>
using namespace std;

int n[10001];
bool arr[10001];

int solution(int n) {
    int sum = n;

    while (1){
        if(n==0){
            break;
        }
        else {
            sum+=n%10;
            n = n/10;
        }
    }
    
    return sum;
}

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    for (int i = 1; i <= 10001; i++){
        int index = solution(i);


        if (index <= 10001){
            arr[index]=true;
        }
    }
    
    for (size_t i = 1; i < 10001; i++){
        if(!arr[i]){
            cout << i << "\n";
        }
    }
    


}