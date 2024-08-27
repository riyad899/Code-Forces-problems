#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string removeWord() {
   string s;
   cin>>s;
   for(int i=0; i<s.size(); ++i){
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
       i+=2;
       cout<<" ";
    }
    else{
        cout<<s[i];
    }
   }

}

int main() {
    FastIO();
    cout<<removeWord()<<endl;
    return 0;
}