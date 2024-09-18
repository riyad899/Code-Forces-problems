#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sol(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = (a + b) / 2;
        int solution=(c-a)+(b-c);
        cout << solution << endl;
    }
}

int main(){
    FastIO();
    sol(); // Call the function
    return 0;
}
