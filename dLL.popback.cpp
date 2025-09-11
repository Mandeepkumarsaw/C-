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

   void pop_back(){
    if(tail ==  NULL) {
        head = tail = NULL;
        cout<<"Error! it's empty Insert First\n";
        return;
    }   

       ListNode* temp = tail;
       tail=tail->prev;

       if(tail->next != NULL){
           temp->prev= NULL;
           tail->next = NULL;      
        }
        // temp->next = NULL;         //OPTIONAL
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

    LL.pop_back();                                                   //deleted from front ie   
    LL.printLL();                       //3 <==> 5 <==> NULL    


    return 0;
}