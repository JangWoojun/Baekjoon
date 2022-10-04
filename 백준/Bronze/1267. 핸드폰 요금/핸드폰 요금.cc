#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int count,a;
	
	int p1 = 0, p2 = 0;

	cin >> count;

	for (int i = 0; i < count; i++){
		cin >> a;

		p1 +=(a/30+1)*10; 
		p2 += (a/60+1)*15;
	}

	if (p1<p2){
		cout << "Y " << p1;
	}
	else if (p1==p2){
		cout << "Y M " << p1;
	}
	else {
		cout << "M " << p2;
	}
}