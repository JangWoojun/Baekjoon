#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int t = 0;
	
	cin >> a;
	
	for (int i = 0; i < a.length(); i++){
		if (a[i]=='A' or a[i]=='B' or a[i]=='C'){
			t+=3;
		}
		else if (a[i]=='D' or a[i]=='E' or a[i]=='F'){
			t+=4;
		}
		else if (a[i]=='G' or a[i]=='H' or a[i]=='I'){
			t+=5;
		}
		else if (a[i]=='J' or a[i]=='K' or a[i]=='L'){
			t+=6;
		}
		else if (a[i]=='M' or a[i]=='N' or a[i]=='O'){
			t+=7;
		}
		else if (a[i]=='P' or a[i]=='Q' or a[i]=='R' or a[i]=='S'){
			t+=8;
		}
		else if (a[i]=='T' or a[i]=='U' or a[i]=='V'){
			t+=9;
		}
		else {
			t+=10;
		}

	}

	cout << t;




}