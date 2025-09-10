#include<bits/stdc++.h>
using namespace std;

struct ListNode {  
    int val;
    ListNode * next;
    ListNode * prev;

    ListNode(int x,ListNode * next=nullptr,ListNode *prev = nullptr):val(x),next(next),prev(prev) {}
                               //or
//     ListNode(int val) {
//     this->val = val;
//     next = nullptr;
//     prev = nullptr;
// }
                               
};

class DoublyList {     
      ListNode *head;
      ListNode *tail;
      
 public:
      DoublyList() {            
        head = tail =  NULL;
                             //OR
    //    DoublyList() : head(nullptr), tail(nullptr) {}
                             

      }
 
   void push_front(int val){    //O(n)
            ListNode* newnode = new ListNode(val);   
           
            // ListNode node1(val); //static method (drawback--when we get back(outside) from func call the val is get deleted ie no node created ),hence don't use it now.
            if(head ==  NULL) {
                head = tail = newnode;
                return;
            } else {
                newnode->next = head;    //(*node2).next = head
                head->prev=newnode;
                head=newnode; 
            }
      }

      
    void printLL() {    //O(n) 
           ListNode *temp = head;
           while(temp != NULL) {
               cout<<temp->val<<" <=> ";
               temp = temp->next;
           }
           cout<<"NULL\n";
         }
}; 

int main(){
    DoublyList dll;

dll.push_front(1);
dll.push_front(8);
dll.push_front(5);

dll.printLL();

return 0;
} 