#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++){

        string s1, s2;
        cin >> s1 >> s2;

        int arr [s1.size()];

        for (int i = 0; i < s1.size(); i++){
            if (s2[i] >= s1[i]){
                arr[i] = s2[i] - s1[i];
            }
            else if (s2[i] < s1[i]){
                arr[i] = s2[i] + 26 - s1[i];
            }
        }

        cout << "Distances: ";
        
        for (int i = 0; i < s1.size(); i++){
            cout  << arr[i]<<' ';
        }
        
        cout << '\n';
    }
	
    

	
}