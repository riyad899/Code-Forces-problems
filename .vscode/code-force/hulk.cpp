#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Banner{
public:
    string hulk(){
        int value;
        cin>>value;
       for(int i=1; i<value; i=i+2){
        return "I hate you";
       }
    }
};

int main(){
    FastIO();
    Banner b;
    cout << b.hulk() << endl;
    return 0;
}