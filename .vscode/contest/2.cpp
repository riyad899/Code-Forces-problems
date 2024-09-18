#include <iostream>
using namespace std;

int countSpecialNumbers(int N) {
    int count = 0;
    int digits[] = {2, 4, 6, 8};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                if (i != j && j != k && i != k && digits[i] > digits[j] && digits[j] > digits[k]) {
                    int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (number <= N) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int result = countSpecialNumbers(N);
    cout << "The number of special numbers between 1 and " << N << " is: " << result << endl;

    return 0;
}
