#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class solution {
public:
    int second() {
        int n = 3;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_index = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[max_index]) {
                max_index = i;
            }
        }
        int second_max_value = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(i != max_index && arr[i] > second_max_value) {
                second_max_value = arr[i];
            }
        }
        return second_max_value;
    }
};
int main() {
    FastIO();
    int t;
    cin >> t;
    while(t--) {
        solution s;
        cout << s.second() << endl;
    }
    return 0;
}
