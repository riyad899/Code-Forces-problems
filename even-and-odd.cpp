#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class number
{
    public:
    void num(){
       int k,n,partition,out;
       cin>>n>>k;
       if(n%2==0){
        partition=n/2;
       }else{
        partition=(n/2)+1;
       }
       if(k<=partition){
        out=(k*2)-1;

       }else{
        out=(k-partition)*2;

       }
       cout<<out<<endl;

    }
};

int main(){
    FastIO();
    system("cls");
    number n;
    n.num();

    return 0;
}