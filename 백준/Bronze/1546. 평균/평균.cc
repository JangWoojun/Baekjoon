#include <bits/stdc++.h>
using namespace std;
int main(){
    double count;

    cin >> count;

    double a,num[(int)count],b;

    

    double max = -100000.0;

    for (int i = 0; i<count; i++){
        cin >> a;
        num [i] = a;
    }

    for (int i = 0; i<count; i++){
        if (num[i]>max){
            max=num[i];
        }
        else {
            continue;
        }
    }

    for (int i = 0; i < count; i++){
        num[i]=num[i]/max*100;
    }

    for (int i = 0; i < count; i++){
        b+=num[i];
    }


    cout << b/count;

}
