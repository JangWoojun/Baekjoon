#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	int* n = new int[t];
	for (int i = 0; i < t; i++) cin >> n[i];
	vector<int> biN; // 이진수로 나타낸 n
	for (int x = 0; x < t; x++)
	{
		if (n[x] == 1) biN.push_back(1);
		else
		{
			while (n[x] != 1)
			{
				biN.push_back(n[x] % 2);
				n[x] /= 2;
				if (n[x] == 1) biN.push_back(n[x]); // 앞에서부터 순서대로 2의0승, 2의1승, ... 순으로 정렬됨
			}
		}
		for (int i = 0; i < biN.size(); i++)
		{
			if (biN[i] == 1) cout << i << " ";
		}
		biN.clear();
		cout << "\n";
	}
}