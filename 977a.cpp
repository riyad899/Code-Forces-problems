#include<bits/stdc++.h>
using namespace std;
int sub(int n,int k){
    int c=0;
    for(int i=0; i<k; i++){
        if(n%10==0){
            n=n/10;
        }
        else{
          n--;
        }
    }
    return n;

}
int main(){
    int n;
    int k;
    cin>>n>>k;
    cout<<sub(n,k)<<endl;
}