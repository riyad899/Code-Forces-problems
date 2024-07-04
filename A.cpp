#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int coins9(vector<int>& coins) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }

    int total_sum = 0;
    for (int coin : coins) {
        total_sum += coin;
    }

    int target_sum = total_sum / 2;
    sort(coins.begin(), coins.end(), greater<int>());

    int my_sum = 0;
    int count = 0;
    for (int coin : coins) {
        my_sum += coin;
        count++;
        if (my_sum > total_sum - my_sum) {
            return count;
        }
    }

    return count; // return the minimum number of coins
}
};

int main() {
    Solution solution;
    vector<int> coins;
    cout << solution.coins9(coins)<< endl;
    return 0;
}