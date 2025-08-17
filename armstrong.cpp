#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int copyN = n;
    int sumofCount = 0;
      while(n!=0) {
         int dig = n%10;
        sumofCount += (dig*dig*dig);

         n /= 10;
    }
    return sumofCount == copyN;
}

int main(){
    int n = 1;

    if(isArmstrong(n)) {
        cout<<"IS a Armstrong";
    } else {
        cout<<"Not a armstrong";
    }

}
