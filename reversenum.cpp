#include<bits/stdc++.h>
using namespace std;

int getdig(int n){
 int reversenum = 0;
          while(n !=0 ) {
             int dig = n%10;
             reversenum = reversenum*10 + dig;
             n /= 10;
           }

    return reversenum;
}
int main(){
    cout<<getdig(7523);
}