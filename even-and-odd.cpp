#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define FastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Number {
public:
    void num() {
        int k, n, partition, out;
        cin >> n >> k;

        if (n % 2 == 0) {
            partition = n / 2;
        } else {
            partition = (n / 2) + 1;
        }

        if (k <= partition) {
            out = (k * 2) - 1;
        } else {
            out = (k - partition) * 2;
        }

        cout << out << endl;
    }
};

int32_t main() {
    FastIO();
    Number number_instance; 
    number_instance.num();
    return 0;
}
