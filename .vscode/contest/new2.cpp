#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<int> counts;
        while(n--){
            int count = 1;
            string x;
            cin >> x;
            for(int i = 0; i < x.size(); i++){
                if(x[i] == '.'){
                    count++;
                }
                if(x[i] == '#'){
                    break;
                }
            }
            counts.push_back(count);
        }
        sort(counts.begin(), counts.end(), greater<int>());

        for(int count : counts){
            cout << count << " ";
        }
    cout<<endl;
    }
}

int main(){
    FastIO();
    sol();
    return 0;
}
