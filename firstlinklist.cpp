#include<bits/stdc++.h>
using namespace std;

struct ListNode {   //class 1 
    int val;
    ListNode * next;

    //Type - 1(Member Initialize List)                                                     Type-2(Assignment inside Constructor Body)
    ListNode(int x):val(x),next(nullptr) {}                       //ListNode(int x) {
                                                                  //val = x;    next = nullptr; }
    ListNode(int x,ListNode * next):val(x),next(next) {}
};

class List {     //class 1 
      ListNode *head;
      ListNode *tail;
 public:
      List() {            //    List() : head(NULL) {}
        head = tail =  NULL;
      }


      void push_front(int val){    //O(n)
            ListNode* newnode = new ListNode(val);   //Dynamic -we use new keyword bcoz data is present in memory after call ie get outside .
           
            // ListNode node1(val); //static method (drawback--when we get back(outside) from func call the val is get deleted ie no node created ),hence don't use it now.
            if(head ==  NULL) {
                head = tail = newnode;
                return;
            } else {
                newnode->next = head;    //(*node2).next = head
                head=newnode;
            }
      }

      void push_back(int val) {      //Using tail-O(1) or using only head-O(n) ie when tail is not given
        ListNode *backnode = new ListNode(val);

        if(head == NULL){
            head = tail = backnode;
        }else {
            tail->next = backnode;
            tail = backnode;
        }
      }

      void pop_front(){     //O(1)
        if(head == NULL){
            cout<<"List is empty!";
            return;
        } 

        ListNode* temp = head;
        head=head->next;
        temp->next=NULL;

        delete temp;
      }

      void pop_back(){    //O(n)
        if(head == nullptr){
            cout<<"List is empty!";
            return;
        } else {
            ListNode* temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;        //this deletes the data present in the tail pointer not the var name;
            tail=temp;          //reloccate tail to temp pointer
            
        }
      }

    //   ListNode* getHead(){        
    //     return head;
    //   }  and make changes on void printLL(ListNode* head)  and  ll.print(gethead());

      void printLL() {        //O(n)
        ListNode *temp = head;
        while(temp != NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
      }
};


int main(){
       List ll;

        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);    //3->2->1->NULL

        ll.push_back(4);     //3->2->1->4->NULL
 
        ll.pop_front();     //2->1->4->NULL
        
        ll.pop_back();      //2->1->NULL

        ll.printLL();

      

    return 0;
}