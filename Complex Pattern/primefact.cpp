#include<iostream>
using namespace std;

int smallfactor(int val){
    if(val <= 1) return -1;

    for(int i=2;i<=val;i++){
        if(val%i == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 15;
    cout<<smallfactor(n);
    return 0;
}