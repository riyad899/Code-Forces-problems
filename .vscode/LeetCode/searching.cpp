#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = -1;
        int diff = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                pos = i;
                break;
            }
            if(abs(nums[i] - target) < diff){
                diff = abs(nums[i] - target);
                pos = i;
            }
        }
        if(pos == -1){
            pos = nums.size();
        }
        return pos+1;
    }
};

int main(){
    system("cls");
    Solution s;
    vector<int> nums;
    int n, target;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    cout << s.searchInsert(nums, target);
    return 0;
}