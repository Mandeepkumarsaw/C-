#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;
    int currSize, cap;  //cuurent size, Capacity
    int f,r;   //front,Rear

public:
     CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f=0;
        r=-1;
     }

     void push(int data) {   //O(1)
        if(currSize == cap) {
            cout<<"CQ is full\n";
            return;
        }

        r=(r+1)%cap;   //act as a pointer that defines enqueue data position in an arr
        arr[r] = data;   //use that pointer value & inserted the value onto it.
        currSize++;    //increase size after enqueue.

     }

     void pop() {     //O(1)
          if(empty()) {
            cout<<"CQ is EMPTY\n";
            return;
          }

          f = (f+1) % cap;
          currSize--; 
     }

     int front() {   //O(1)
        if(empty()) {
            cout<<"CQ is EMPTY\n";
            return -1;
          }
           return arr[f];
     }

     bool empty() {   //O(1)
        return currSize == 0;
     }
};

int main() {
    CircularQueue cq(3);

    cq.push(1);      //Enqueue--At Rear
    cq.push(2);     //Dequeue--At front
    cq.push(3);
  
    cq.pop();
    cq.push(5);

    while(!cq.empty()) {      //front---->2, 3, 5<---Rear
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;

    return 0;
}
