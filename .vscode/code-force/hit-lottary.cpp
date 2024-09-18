#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
   int lottary(){
       int num;
    cin >> num;
    int count = 0;

    // Count the number of 100s
    if(num / 100) {
        count += num / 100;
        num = num % 100;
    }

    // Count the number of 20s
    if(num / 20) {
        count += num / 20;
        num = num % 20;
    }

    // Count the number of 10s
    if(num / 10) {
        count += num / 10;
        num = num % 10;
    }

    // Count the number of 5s
    if(num / 5) {
        count += num / 5;
        num = num % 5;
    }

    // Count the number of 1s
    if(num / 1) {
        count += num / 1;
    }
    return count;


    }



};
int main(){
    FastIO();
    Solution sol;
    cout<<sol.lottary()<<endl;
}