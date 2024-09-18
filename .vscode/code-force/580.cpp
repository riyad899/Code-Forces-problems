#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'

int kefas(){
    int n, count = 0;
    cin >> n;
    string str;
    for(int i = 0; i < n; ++i){
        cin >> str;
        if(str == "Tetrahedron"){
            count +=4;
        }
        else if(str == "Cube"){
            count += 6;
        }
        else if(str == "Octahedron"){
            count += 8;
        }
        else if(str == "Dodecahedron"){
            count += 12;
        }
        else if(str == "Icosahedron"){
            count += 20;
        }
    }
    return count;
}

int main(){
    cout << kefas() << endl;
    return 0;
}