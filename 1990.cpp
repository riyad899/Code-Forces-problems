#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        height.push_back(v);
    }

    int maxH = 0, maxI = 0, minH = 101, minI = n - 1;
    for (int i = 0; i < n; i++) {
        if (height[i] > maxH) {
            maxH = height[i];
            maxI = i;
        }
        if (height[i] <= minH) {
            minH = height[i];
            minI = i;
        }
    }

    if (minI > maxI) {
        cout << maxI + n - 1 - minI << endl;
    } else {
        cout << maxI + n - 1 - minI - 1 << endl;
    }

    return 0;
}
