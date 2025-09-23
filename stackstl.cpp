#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"NULL"<<endl;         //30 20 10

    return 0;
};