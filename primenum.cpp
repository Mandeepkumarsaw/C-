#include<bits/stdc++.h>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){   //cond to check the number is prime or not
            return "Non prime";
        }
    }
    return "Prime";
}

int main(){
   int n = 24;

   cout<<isPrime(n);
   return 0;
}