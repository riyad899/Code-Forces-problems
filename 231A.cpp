#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    int count = 0;

    for(int i = 0; i < testCase; i++) {
        int t, r, v;
        cin >> t >> r >> v;
        int sum = t + r + v;
        if(sum >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0; 
}
