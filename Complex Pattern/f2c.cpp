#include<iostream>
using namespace std;

void f2c(int minF,int maxF,int step){
    for(int st=minF;st<=maxF;st+=step){
        float c=(5.0f/9.0f)*(st-32);           //General formula to find Celsius from Fahrenheit
        cout<<st<<"\t"<<(int)c<<"\n";
    }
}

int main(){
    int minF,maxF,step;
    cin>>minF;
    cin>>maxF;
    cin>>step;
    f2c(minF,maxF,step);
    return 0;
}