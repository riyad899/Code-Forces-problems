#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= target) {
            return i;
        }
    }
    return nums.size();
}

int main() {

    vector<int> nums;
    int n, target;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    int position = searchInsert(nums, target);
    cout << position << endl;

    return 0;
}
