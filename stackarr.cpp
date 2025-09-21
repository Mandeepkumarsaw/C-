#include<bits/stdc++.h>
using namespace std;

class Stack {
         vector<int> vec;

public:

     void push(int val) { //O(1)
       vec.push_back(val);
     }

     void pop() {         //O(1)          
       vec.pop_back();
     }

     int top() {          //O(1)
       return vec[vec.size() - 1];
     }
     
     bool empty(){
        return vec.size() == 0;

     }


};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}