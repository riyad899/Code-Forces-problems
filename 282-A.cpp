#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
string k;
    while(n--){
    cin>>k;
    if(k=="X++" || k=="++X"){
        x++;

    }else{
        x--;
    }
    }
    cout<<x;
    return 0;
}