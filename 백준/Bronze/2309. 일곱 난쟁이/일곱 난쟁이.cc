#include <bits/stdc++.h>
using namespace std;
vector<int> v(9);
vector<int> ans(7);
int cnt = 0;

int main() {
    for (int i = 0; i < 9; i++) cin >> v[i];
    sort(v.begin(), v.end());
    do {
        cnt = 0;
        for(int i = 0; i < 7; i++) {
            cnt+=v[i];
            ans[i] = v[i];
        }
        if (cnt == 100) break;
    } while (next_permutation(v.begin(), v.end()));
    

    for(auto it: ans) cout << it <<"\n";

    return 0;
}