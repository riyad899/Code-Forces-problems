#include <bits/stdc++.h> // This includes almost all standard C++ libraries
using namespace std;

#define ll long long // Macro definition for long long as ll

// Class to encapsulate the solution logic
class Solution {
public:
    int maxExpressionValue(int a, int b, int c) {
        // Calculating different possible values using various expressions
        int cal1 = a + b * c;
        int cal2 = a * (b + c);
        int cal3 = a * b * c;
        int cal4 = (a + b) * c;
        int cal5 = a + b + c;

        // Returning the maximum value among all calculated expressions
        return max({cal1, cal2, cal3, cal4, cal5});
    }
};

int main() {
    // Object of the Solution class
    Solution sol;

    // Reading input values
    int a, b, c;
    cin >> a >> b >> c;

    // Outputting the result of the maxExpressionValue function
    cout << sol.maxExpressionValue(a, b, c) << endl;

    return 0;
}
