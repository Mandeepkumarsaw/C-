#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int j=1;j<=n;j++){
    for(int i=j;i<=n;i++){
        cout<<"  ";
    }
    for(int i=1;i<=j;i++){
        cout<<"* ";
    }
    
    cout<<endl;
}
}