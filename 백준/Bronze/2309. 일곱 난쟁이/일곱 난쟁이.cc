#include <bits/stdc++.h>
using namespace std;

int main (){
    int sum;
    int out[9] = {0, };
    int nums[9];
    int num = 0;
    int chk = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> sum;
        nums[i]=sum;
        num+=sum;

    }
    
    for (int i = 0; i<9; i++){
        num=num-nums[i];
        if (chk==100){
            break;
        }
        else{
        for (int l = 0; l < 9; l++){
           if (nums[l]!=nums[i]) {
                num=num-nums[l];
                if (num == 100){
                    for (int j = 0; j<9; j++){
                        if (nums[j]!=nums[i]){
                            if (nums[j]!=nums[l]){
                                out[j]=nums[j];
                                chk=chk+nums[j];
                            }
                            else {
                                continue;
                            }
                        }
                        else {
                            continue;
                        } 
                    }
                }
                else {    
                    num=num+nums[l];
                    continue;
                }
           }
           else if (nums[l]==nums[i]){
                continue;
           }
           else {
                num=num+nums[l];
           }
        }
        num=num+nums[i];
        }

    }

    sort(out,out+9);

    for (size_t i = 0; i < 9; i++)
    {
        if (out[i]>0){
            cout << out[i] << "\n";
        }
        else {
            continue;
        }
    }
    
}