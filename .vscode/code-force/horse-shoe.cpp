#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>ar;
    int n=4;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ar.push_back(x);
    }
    int count = 1;
    for(int i=1; i<ar.size(); i++){
        if(ar[i] == ar[i-1]){
            count++;
        }
    }
   cout<<count-1;
}