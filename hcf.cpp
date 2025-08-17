#include <bits/stdc++.h>
using namespace std;

int isgcd(int a,int b) {
    if (a==0) return b;

    while (a>0 && b>0)
    {
       if(a>b){
        a = a % b;
       } else {
        b = b%a;
       }
    }
    return a;

    
}

int gcdRecursion(int a , int b){
    if(b==0) return a;

    return gcdRecursion(b,a%b);
}

int main(){

cout<<gcdRecursion(12,6);

}