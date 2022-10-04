#include <bits/stdc++.h>
using namespace std;
int main(){

    int all,n,a;
    double end;
    

    cin >> all; // 케이스 값 받기

    for (int i = 0; i < all; i++){
        double ev = 0.0;
        double count = 0.0;

        cin >> n; // 총 숫자 받기
        int num[n] = {0,};
    
        for (int j = 0; j < n; j++){ //num 배열에 값 넣기
            cin >> a;
            num[j] = a;
        }

        for (int i = 0; i < sizeof(num) / sizeof(int); i++){ // 값 평균 내기
            ev+=double(num[i]);
        }
        ev=ev/double(n);
        
        for (int i = 0; i < sizeof(num) / sizeof(int); i++){ //평균 넘는거 찾기
            if (num[i]>ev){
                count=count+1.0;
            }
            else {
                continue;
            }
        }
        end = count/double(sizeof(num) / sizeof(int))*100;

        printf("%.3lf% \n",end); // 평균 넘는 애들 출력
    }

}
