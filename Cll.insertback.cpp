#include<bits/stdc++.h>
using namespace std;

struct Listnode {
public:
     int val;
     Listnode* next;
     
     Listnode(int x):val(x),next(nullptr) {}
};

class CircularList {
public:    
    Listnode* head;
    Listnode* tail;

    CircularList(){
        head = tail = nullptr;
    }

    void inserAtBack(int val) {
         Listnode* newNode = new Listnode(val);

        if(head == NULL){       //head=tail
            head = tail = newNode;
            tail->next = head;
        } else {
              tail->next =  newNode;
              tail =  newNode;
              newNode->next = head;
        }
    }

    void PrintLL() {
  
        if(head == nullptr) return;

         Listnode* temp = head;

         do {
        cout<<temp->val<<"----->";
        temp = temp->next;
        } while(temp != head);
        
        cout<<head->val<<" !cyclic "<<endl;
        cout<<"^--head,tail--^\n";         //temp == head
     
    }
};

int main(){
    CircularList cll;
    cll.inserAtBack(1);
    cll.inserAtBack(3);
    cll.inserAtBack(5);

    cll.PrintLL();

    return 0;
}