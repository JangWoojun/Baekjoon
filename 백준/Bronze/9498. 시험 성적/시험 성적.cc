#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;

    cin >> a;

    if (100<=a or a>=90){
        cout << "A";
    }
    else if (89<=a or a>=80){
        cout << "B";
    }
    else if (79<=a or a>=70){
        cout << "C";
    }
    else if (69<=a or a>=60){
        cout << "D";
    }
    else {
        cout << "F";
    }

}
