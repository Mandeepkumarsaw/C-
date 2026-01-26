#include<iostream>
using namespace std;

int main(){
    int n=7;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"* ";
        }cout<<endl;
    }

    for(int j=1;j<n;j++){
        for(int k=1;k<=j;k++){
            cout<<"  ";
        }
        for(int l=1;l<n-j;l++){
            cout<<"* ";
        } 
        for(int m=1;m<n-j-1;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}