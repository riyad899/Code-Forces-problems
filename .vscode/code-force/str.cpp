#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class solution{
    public:
string cod(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            return "YES";
        }
    }
    return "NO";
}
};

int main(){
    solution s;
    system("cls");
    FastIO();
    cout<<s.cod()<<endl;
    return 0;
}
