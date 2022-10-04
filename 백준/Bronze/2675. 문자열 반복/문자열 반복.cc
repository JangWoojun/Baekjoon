#include <bits/stdc++.h>
using namespace std;

int main (){
	int n,n1;
	string sum;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> n1 >> sum;

		for (size_t i = 0; i < sum.length(); i++)
		{
			for (size_t j = 0; j < n1; j++)
			{
				cout << sum[i];
			}
			
		}
		cout << "\n";
		
	}
	
}

