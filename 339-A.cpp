#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    multiset<int, less<int>> s;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, '+')) {
        s.insert(stoi(temp));
    }

    bool first = true;
    for (int x : s) {
        if (!first) {
            cout << "+";
        }
        cout << x;
        first = false;
    }

    return 0;
}