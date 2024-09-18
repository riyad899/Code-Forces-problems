#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void sortAndPrint() {
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        s.insert(value);
    }
    for (int value : s) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    FastIO();
    sortAndPrint();
    return 0;
}
