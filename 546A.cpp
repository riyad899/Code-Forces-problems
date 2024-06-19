#include<bits/stdc++.h>
using namespace std;
int banana(int bana, int total,  int want){
int value=0;
int value2=0;
int ok=0;

     for(int i=1; i<=want; i++){

     value=bana*i;
     value2=value+value2;
     }
    int value3= value2-total;
    if(value3<0){
        return 0;
    }
    return value3;
}
int main(){
    int bana,total,want;
    cin>>bana>>total>>want;
    cout<<banana(bana,total,want)<<endl;
}