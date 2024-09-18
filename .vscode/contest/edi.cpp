#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> coins(N);
        for (int i = 0; i < N; i++) {
            cin >> coins[i];
        }
        sort(coins.begin(), coins.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < N; i++) {
            minDiff = min(minDiff, coins[i] - coins[i - 1]);
        }
        cout << minDiff << endl;
    }

    return 0;
}
