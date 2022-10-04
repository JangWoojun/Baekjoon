#include <bits/stdc++.h>
using namespace std;

int main (){
    string sum;
    int chk[26] = {0, };
    cin >> sum;

    int size = sum.length();

    int b[size];

    for (size_t i = 0; i < size; i++)
    {
        b[i]=sum[i]-32;
    }
    


    for (int i = 0; i < size; i++){
        if (char(b[i])=='A'){
            chk[0]++;
        }
        else if (char(b[i])=='B'){
            chk[1]++;
        }
        else if (char(b[i])=='C'){
            chk[2]++;
        }        
        else if (char(b[i])=='D'){
            chk[3]++;
        }        
        else if (char(b[i])=='E'){
            chk[4]++;
        }        
        else if (char(b[i])=='F'){
            chk[5]++;
        }        
        else if (char(b[i])=='G'){
            chk[6]++;
        }        
        else if (char(b[i])=='H'){
            chk[7]++;
        }        
        else if (char(b[i])=='I'){
            chk[8]++;
        }        
        else if (char(b[i])=='J'){
            chk[9]++;
        }        
        else if (char(b[i])=='K'){
            chk[10]++;
        }        
        else if (char(b[i])=='L'){
            chk[11]++;
        }        
        else if (char(b[i])=='M'){
            chk[12]++;
        }        
        else if (char(b[i])=='N'){
            chk[13]++;
        }        
        else if (char(b[i])=='O'){
            chk[14]++;
        }        
        else if (char(b[i])=='P'){
            chk[15]++;
        }        
        else if (char(b[i])=='Q'){
            chk[16]++;
        }        
        else if (char(b[i])=='R'){
            chk[17]++;
        }        
        else if (char(b[i])=='S'){
            chk[18]++;
        }        
        else if (char(b[i])=='T'){
            chk[19]++;
        }        
        else if (char(b[i])=='U'){
            chk[20]++;
        }        
        else if (char(b[i])=='V'){
            chk[21]++;
        }        
        else if (char(b[i])=='W'){
            chk[22]++;
        }        
        else if (char(b[i])=='X'){
            chk[23]++;
        }        
        else if (char(b[i])=='Y'){
            chk[24]++;
        }        
        else if (char(b[i])=='Z'){
            chk[25]++;
        }        
        else {
            continue;
        }
    }
    for (size_t i = 0; i < 26; i++)
    {
        cout << chk[i] << " ";
    }
    
}