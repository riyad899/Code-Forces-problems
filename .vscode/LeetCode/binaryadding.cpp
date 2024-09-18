#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry == 1) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }

        return result;
    }
};
int main(){
    Solution s;
    string a, b;
    cin >> a >> b;
    cout << s.addBinary(a, b) << endl; 
    return 0;
}