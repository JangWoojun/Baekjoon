#include <bits/stdc++.h>
using namespace std;

int main (){
    int num;

    cin >> num;

    int f[26] = {0, };
    string fn;

    for (size_t i = 0; i < num; i++){
        cin >> fn;
        if (fn[0]=='a'){
            f[0]++;
        }
        else if (fn[0]=='b'){
            f[1]++;
        }
        else if (fn[0]=='c'){
            f[2]++;
        }
        else if (fn[0]=='d'){
            f[3]++;
        }
        else if (fn[0]=='e'){
            f[4]++;
        }
        else if (fn[0]=='f'){
            f[5]++;
        }
        else if (fn[0]=='g'){
            f[6]++;
        }
        else if (fn[0]=='h'){
            f[7]++;
        }
        else if (fn[0]=='i'){
            f[8]++;
        }
        else if (fn[0]=='j'){
            f[9]++;
        }
        else if (fn[0]=='k'){
            f[10]++;
        }
        else if (fn[0]=='l'){
            f[11]++;
        }
        else if (fn[0]=='m'){
            f[12]++;
        }
        else if (fn[0]=='n'){
            f[13]++;
        }
        else if (fn[0]=='o'){
            f[14]++;
        }
        else if (fn[0]=='p'){
            f[15]++;
        }
        else if (fn[0]=='q'){
            f[16]++;
        }
        else if (fn[0]=='r'){
            f[17]++;
        }
        else if (fn[0]=='s'){
            f[18]++;
        }
        else if (fn[0]=='t'){
            f[19]++;
        }
        else if (fn[0]=='u'){
            f[20]++;
        }
        else if (fn[0]=='v'){
            f[21]++;
        }
        else if (fn[0]=='w'){
            f[22]++;
        }
        else if (fn[0]=='x'){
            f[23]++;
        }
        else if (fn[0]=='y'){
            f[24]++;
        }
        else if (fn[0]=='z'){
            f[25]++;
        }
        else {
            continue;
        }
                
    }
    bool chk = 0;

    for (size_t i = 0; i < 26; i++){
        if (f[i]>=5){
            if (i==0){
                cout << "a";
                chk = true;
            }
            else if (i==1){
                cout << "b";
                chk = true;
            }
            else if (i==2){
                cout << "c";
                chk = true;
            }
            else if (i==3){
                cout << "d";
                chk = true;
            }
            else if (i==4){
                cout << "e";
                chk = true;
            }
            else if (i==5){
                cout << "f";
                chk = true;
            }
            else if (i==6){
                cout << "g";
                chk = true;
            }
            else if (i==7){
                cout << "h";
                chk = true;
            }
            else if (i==8){
                cout << "i";
                chk = true;
            }
            else if (i==9){
                cout << "j";
                chk = true;
            }
            else if (i==10){
                cout << "k";
                chk = true;
            }
            else if (i==11){
                cout << "l";
                chk = true;
            }
            else if (i==12){
                cout << "m";
                chk = true;
            }
            else if (i==13){
                cout << "n";
                chk = true;
            }
            else if (i==14){
                cout << "o";
                chk = true;
            }
            else if (i==15){
                cout << "p";
                chk = true;
            }
            else if (i==16){
                cout << "q";
                chk = true;
            }
            else if (i==17){
                cout << "r";
                chk = true;
            }
            else if (i==18){
                cout << "s";
                chk = true;
            }
            else if (i==19){
                cout << "t";
                chk = true;
            }
            else if (i==20){
                cout << "u";
                chk = true;
            }
            else if (i==21){
                cout << "v";
                chk = true;
            }
            else if (i==22){
                cout << "w";
                chk = true;
            }
            else if (i==23){
                cout << "x";
                chk = true;
            }
            else if (i==24){
                cout << "y";
                chk = true;
            }
            else if (i==25){
                cout << "z";
                chk = true;
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
    }

    if (chk==false){
        cout << "PREDAJA";
    }
    

}