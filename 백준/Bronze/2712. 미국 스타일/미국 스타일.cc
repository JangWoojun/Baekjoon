#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int count;
	cin >> count;
	double a;
	string s;

	for (size_t i = 0; i < count; i++){
		cin >> a >> s;
		if (s=="kg"){
			printf("%.4lf lb\n",a*2.2046);
		}
		else if (s=="g"){
			printf("%.4lf l\n",a*3.7854);
		}
		else if (s=="lb"){
			printf("%.4lf kg\n",a*0.4536);
		}
		else {
			printf("%.4lf g\n",a*0.2642);
		}
	}
	
}