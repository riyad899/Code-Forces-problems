#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Banner{
public:
    string name(){
        int n;
        cin >> n;
        string result;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                result += "I love";
            }else{
                result += "I hate";
            }
            if(i!= n){
                result += " that ";
            }
        }
        result+=" it";
        return result;
    }
};
int main(){
    system("cls");
    FastIO();
    Banner b;
    cout << b.name() << endl;
    return 0;
}