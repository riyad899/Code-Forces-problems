#include <iostream>
#include <algorithm>
using namespace std;

int maximizeProduct(int a, int b, int c, int increments) {
    for (int i = 0; i < increments; ++i) {
        if (a <= b && a <= c) {
            a++;
        } else if (b <= a && b <= c) {
            b++;
        } else {
            c++;
        }
    }
    return a * b * c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int result = maximizeProduct(a, b, c, 5);
        cout << result << endl;
    }
    return 0;
}
