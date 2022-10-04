#include <bits/stdc++.h>
using namespace std;



int sum (int a1,int b2,int c2, int d3, int e4){
	return (a1*a1+b2*b2+c2*c2+d3*d3+e4*e4)%10;
};

int main(){
	int a,b,c,d,e;

	cin >> a >> b >> c >> d >> e;
	cout << sum(a,b,c,d,e);

}

