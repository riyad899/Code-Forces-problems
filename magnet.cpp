#include<bits/stdc++.h>
using namespace std;

int magnet(int in){
    string val="",val2="";
    int count = 0;
    for(int i = 0; i < in; i++){
        cin >> val2;
        if(val != val2){
            count++;
            val=val2;
        }
    }
    return count;
}

int main(){
    system("cls");
    int in;
    cin >> in;
    cout << magnet(in) << endl;
    return 0;
}