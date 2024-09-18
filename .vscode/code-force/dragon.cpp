#include <iostream>
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
     int sol() {
        int k,l,m,n, total_dragon;
        cin >> k >>l>>m>>n>> total_dragon;
        int count=1;
          for(int i=1; i<=total_dragon; i++){
             if(i%k==0 || i%m==0 || i%n==0 || i%l==0){
                count++;
             }
          }
          return count-1;
    }
};
int main(){
    // FastIO;
    Solution s;
    cout<<s.sol();
}