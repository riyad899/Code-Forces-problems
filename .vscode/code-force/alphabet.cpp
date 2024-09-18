#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPangram(const string& str) {
    set<char> letters;

    for (char c : str) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }

    return letters.size() == 26;
}

int main() {
    int length;
    cin >> length;
    cin.ignore();

    string sentence;
    sentence.resize(length);
    cin.read(&sentence[0], length);

    if (isPangram(sentence)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
