#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;

    long long product = 1;
    bool hasNonZeroDigit = false;

    for (char ch : number) {
        int digit = ch - '0';
        if (digit == 0) {
            product = 0;
            break;
        } else {
            product *= digit;
            hasNonZeroDigit = true;
        }
    }

   if(product%11==0){
       cout<<"YES"<<endl;
   }
   if(product%3==0){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }

    return 0;
}