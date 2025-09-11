#include<bits/stdc++.h>
using namespace std;

struct ListNode {       //Initialization
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(int x,ListNode* next = nullptr,ListNode* prev = nullptr) : val(x),next(next),prev(prev) {}
};

class DoublyList {
    ListNode* head;
    ListNode* tail;
public:
     DoublyList() {
         head = tail = nullptr;
     }    


   void push_back(int val) {
     ListNode* newNode = new ListNode(val);

     if(head==NULL) {
        head=tail=newNode;
     }
     else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
     }
   }

   void pop_front() {
     if(head == NULL) cout<<"D Linked list is empty! Insert First";


    ListNode* temp = head;
    head = head->next;

    if(head != NULL){
        head->prev = NULL;
    }
    temp->next = NULL;
    delete temp;

   }

    void printLL() {           
         ListNode* temp = head;            
               while(temp != NULL) {
               cout<<temp->val<<" <==> ";
               temp = temp->next;
           }
           cout<<"NULL\n";
        }
        
};

int main(){
    DoublyList LL;

    LL.push_back(3);
    LL.push_back(5);
    LL.push_back(9);
    LL.printLL();                        //3 <==> 5 <==> 9 <==> NULL

    LL.pop_front();                                                   //deleted from front ie   
    LL.printLL();                        //5 <==> 9 <==> NULL       


    return 0;
}