#include<bits/stdc++.h>
using namespace std;

struct Node {
public:    
    int val;
    Node* next;
 
    Node(int x) {
        val = x;
        next = NULL;
    }
};

class CircularList {
    Node* head;
    Node* tail;
public:
     CircularList() {
         head = tail = nullptr;
     } 

     void inserAtHead(int val) {
       Node* newNode = new Node(val);

        if(head == NULL){       //head=tail
            head = tail = newNode;
            tail->next = head;
        }

        else {
            newNode->next = head;
            head = newNode;
            tail->next = head;           //head == newNode
        }
     }

     void printList(){
        if(head == nullptr) return;

        
        Node* temp = head;

         do {
        cout<<temp->val<<"----->";
        temp = temp->next;
        } while(temp != head);
        
        cout<<head->val<<" !cyclic"<<endl;
        cout<<"^--head,tail--^\n";         //temp == head
     }
};    

int main(){
    CircularList cll;
   cll.inserAtHead(1);
   cll.inserAtHead(2);
   cll.inserAtHead(3);

   cll.printList();

    return 0;
}
