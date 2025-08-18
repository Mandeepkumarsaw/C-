#include <bits/stdc++.h>
using namespace std;

// BASIC FORMULA---a*b = lcm(a,b)*hcf(a,b)

int gcdRecurison(int a, int b){
    if(b==0) return a;

    return gcdRecurison(b,a%b);

}
int lcm(int a , int b) {
  int val =  gcdRecurison(a,b);

   return a*b/ val;     //lcm(a,b)=a*b/hcf(a,b)
}

int main() {
    cout<<lcm(6,12);

}
