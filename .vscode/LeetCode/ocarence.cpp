#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int strStr(string haystack, string needle){
     for(int i=0; i<haystack.size(); i++ ){
        if(haystack[i]==needle[i]){
            return 0;
        }else{
            return -1;
        }
     }

    }
};
int main(){
    FastIO();
    Solution s;
    string haystack, needle;
    cin>>haystack>>needle;
    cout<<s.strStr(haystack, needle)<<endl;
}