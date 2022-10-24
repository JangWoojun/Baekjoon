#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

	int n,num;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++){
		cin >> num;
		if (num!=0){
			v.push_back(num);
		}
		else {
			v.pop_back();
		}
	}

	long long count = 0;

	for (int i = 0; i < v.size(); i++){
		count+=v[i];
	}

	cout << count;
	
	

}