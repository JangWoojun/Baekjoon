#include <bits/stdc++.h>
using namespace std;

int main () {

    string a;
    cin >> a;

    int b[a.length()];

    for (int i = 0; i < a.length(); i++){
        if (int(a[i])>90){
            b[i]=int(a[i])-32;
        }
        else {
            b[i]=int(a[i]);
        }
    }

    int num[26] = {0, };

    for (int i = 0; i < a.length(); i++){
        if (char(b[i])=='A'){
            num[0]++;
        }
        else if (char(b[i])=='B'){
            num[1]++;
        }
        else if (char(b[i])=='C'){
            num[2]++;
        }        
        else if (char(b[i])=='D'){
            num[3]++;
        }        
        else if (char(b[i])=='E'){
            num[4]++;
        }        
        else if (char(b[i])=='F'){
            num[5]++;
        }        
        else if (char(b[i])=='G'){
            num[6]++;
        }        
        else if (char(b[i])=='H'){
            num[7]++;
        }        
        else if (char(b[i])=='I'){
            num[8]++;
        }        
        else if (char(b[i])=='J'){
            num[9]++;
        }        
        else if (char(b[i])=='K'){
            num[10]++;
        }        
        else if (char(b[i])=='L'){
            num[11]++;
        }        
        else if (char(b[i])=='M'){
            num[12]++;
        }        
        else if (char(b[i])=='N'){
            num[13]++;
        }        
        else if (char(b[i])=='O'){
            num[14]++;
        }        
        else if (char(b[i])=='P'){
            num[15]++;
        }        
        else if (char(b[i])=='Q'){
            num[16]++;
        }        
        else if (char(b[i])=='R'){
            num[17]++;
        }        
        else if (char(b[i])=='S'){
            num[18]++;
        }        
        else if (char(b[i])=='T'){
            num[19]++;
        }        
        else if (char(b[i])=='U'){
            num[20]++;
        }        
        else if (char(b[i])=='V'){
            num[21]++;
        }        
        else if (char(b[i])=='W'){
            num[22]++;
        }        
        else if (char(b[i])=='X'){
            num[23]++;
        }        
        else if (char(b[i])=='Y'){
            num[24]++;
        }        
        else if (char(b[i])=='Z'){
            num[25]++;
        }        
        else {
            continue;
        }
    }

    int vs = 0;
    string last;
    int ev=-1;
    int chk = -1;

    for (int i = 0; i < 26; i++){
        if (num[i]>0){
            if (num[i]==vs){
                vs = num[i];
                ev = 0;
            }            
            else if (num[i]>vs){
                vs = num[i];
                ev = 1;
                chk = i;
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
    }
    
    
    if (ev==0){
        cout << "?";
    }
    else if (chk==0){
        cout << "A";
    }
    else if (chk==1){
        cout << "B";
    }
    else if (chk==2){
        cout << "C";
    }
    else if (chk==3){
        cout << "D";
    }
    else if (chk==4){
        cout << "E";
    }
    else if (chk==5){
        cout << "F";
    }
    else if (chk==6){
        cout << "G";
    }
    else if (chk==7){
        cout << "H";
    }
    else if (chk==8){
        cout << "I";
    }
    else if (chk==9){
        cout << "J";
    }
    else if (chk==10){
        cout << "K";
    }
    else if (chk==11){
        cout << "L";
    }
    else if (chk==12){
        cout << "M";
    }
    else if (chk==13){
        cout << "N";
    }
    else if (chk==14){
        cout << "O";
    }
    else if (chk==15){
        cout << "P";
    }
    else if (chk==16){
        cout << "Q";
    }
    else if (chk==17){
        cout << "R";
    }
    else if (chk==18){
        cout << "S";
    }
    else if (chk==19){
        cout << "T";
    }
    else if (chk==20){
        cout << "U";
    }
    else if (chk==21){
        cout << "V";
    }
    else if (chk==22){
        cout << "W";
    }
    else if (chk==23){
        cout << "X";
    }
    else if (chk==24){
        cout << "Y";
    }
    else {
        cout << "Z";
    }






}