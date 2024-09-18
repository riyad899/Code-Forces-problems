#include<bits/stdc++.h>
using namespace std;

int sol() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double val2 = (sum / 4.0);

    if (floor(val2) == val2) {

        return static_cast<int>(val2);
    } else {
        int val3 = floor(val2) + 1;
        return val3 ;
    }

    return 0;
}

int main() {
    cout<<sol()<<endl;
    return 0;
}
