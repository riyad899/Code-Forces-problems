#include<bits/stdc++.h>
using namespace std;

void com(){
    int n;
    cin >> n;
    int arr[n];
    bool hasNonZero = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]!= 0){
            hasNonZero = true;
            break;
        }
    }
    if(hasNonZero){
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}

int main(){
    com();
    return 0;
}