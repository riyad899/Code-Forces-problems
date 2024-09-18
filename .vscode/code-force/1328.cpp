#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int div(){
    int count=0;
    int a,b; cin>>a>>b;
    if(a%b==0){
        return 0;
    }else{
        count = (b - (a % b));
    }
    return count;

}

int main(){
    FastIO();
    int t; cin>>t;
    while(t--){
        cout<<div()<<endl;
    }
    return 0;
}