#include <bits/stdc++.h>
using namespace std;

long long sum(std::vector<int> &a) {
	long long any = 0;
	for (int i = 0; i < a.size(); i++) {
		any += a[i];
	}
	return any;
}

