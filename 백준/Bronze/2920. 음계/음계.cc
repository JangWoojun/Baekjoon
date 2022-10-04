#include <bits/stdc++.h>
using namespace std;

int main (){
	int n[8] ={0, },sum;

	for (size_t i = 0; i < 8; i++)
	{
		cin >> sum;
		n[i]=sum;
	}
	
	if (n[0]==1 and n[1]==2 and n[2]==3 and n[3]==4 and n[4]==5 and n[5]==6 and n[6]==7 and n[7]==8)
	{
		cout << "ascending";
	}
	else if (n[0]==8 and n[1]==7 and n[2]==6 and n[3]==5 and n[4]==4 and n[5]==3 and n[6]==2 and n[7]==1)
	{
		cout << "descending";
	}
	else 
	{
		cout << "mixed";
	}

	
}

