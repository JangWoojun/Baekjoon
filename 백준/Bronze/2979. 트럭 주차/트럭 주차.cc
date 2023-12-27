#include <bits/stdc++.h>
using namespace std;
vector<int>t(100, 0);
string s;
int a, b, c, t1, t2, cnt;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &t1, &t2);
        for (int j = t1; j < t2; j++) {
            t[j]+=1;
        }
    }
    
    for (int it: t) {
        if (it == 0) {
            continue;
        } else if (it == 1) {
            cnt += (a * 1);
        } else if (it == 2) {
            cnt += (b * 2);
        } else {
            cnt += (c * 3);
        }
    }

    cout << cnt;

    return 0;
}