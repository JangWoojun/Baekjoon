#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    int count = 1;

    cin >> a >> b >> c;
    
    string num = to_string(a*b*c);
    int num_length = num.length();

    int list1 [10] = {0, };

    for (int j = 0; j < 10; j++){
        for (int i = 0; i < num_length; i++){
            if (num[i]-48 == j){
                list1 [j] = list1 [j] + count;
            }
            else {
                continue;
            }
        }
    }
    
    for (int i = 0; i < 10; i++){
        cout << list1[i] << endl;
    }
    

}
