#include <iostream>
using namespace std;

int calculateProductOfDigits(int N) {
    int product = 1;

    while (N > 0) {
        int digit = N % 10;
        product *= digit;
        N /= 10;
    }

    return product;
}

int main() {
    int N;
    cin >> N;

    int product = calculateProductOfDigits(N);

    if (product != 0 && product % 3 == 0 && product % 11 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
