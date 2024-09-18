#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    void sol() {
        vector<int> nums;
        int n;
        cin >> n;
        nums.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> nums2;
        int n2;
        cin >> n2;
        nums2.resize(n2);
        for (int i = 0; i < n2; i++) {
            cin >> nums2[i];
        }

        cout << "Elements of the first array: ";
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        cout << "Elements of the second array: ";
        for (int i = 0; i < n2; i++) {
            cout << nums2[i] << " ";
        }
        cout << endl;

        int startIndex;
        cin >> startIndex;

        if (startIndex >= 0 && startIndex < nums.size()) {
            nums.erase(nums.begin() + startIndex, nums.end());
            cout << "First array after removal: ";
            for (int i = 0; i < nums.size(); i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Invalid index for the first array!" << endl;
        }

        int startIndex2;
        cin >> startIndex2;

        if (startIndex2 >= 0 && startIndex2 < nums2.size()) {
            nums2.erase(nums2.begin() + startIndex2, nums2.end());
            cout << "Second array after removal: ";
            for (int i = 0; i < nums2.size(); i++) {
                cout << nums2[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Invalid index for the second array!" << endl;
        }

        vector<int> mergedArray;
        mergedArray.insert(mergedArray.end(), nums.begin(), nums.end());
        mergedArray.insert(mergedArray.end(), nums2.begin(), nums2.end());

        // Sort the merged vector in ascending order
        sort(mergedArray.begin(), mergedArray.end());

        // Print the sorted array
        cout << "Merged and sorted array in ascending order: ";
        for (int i = 0; i < mergedArray.size(); i++) {
            cout << mergedArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    FastIO();
    Solution s;
    s.sol();
    return 0;
}
