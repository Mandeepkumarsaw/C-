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

    void insert(int val , int pos) {    //O(n)
        if(pos < 0) {
            cout<<"Invalid pos\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        ListNode *temp = head;
        for(int i=0;i<pos-1;i++) {
            if(temp == NULL) {
                cout<<"Invalid pos\n";
                return;
            }
             temp = temp->next;
        }

        ListNode *newNode = new ListNode(val);
        newNode->next =  temp ->next;
        temp->next = newNode;
    }

    int Search(int key) {      //O(n)
         ListNode* temp = head;
         int idx = 0;

        while(temp != NULL){
            if(temp->val == key){
            return idx;
           } 
            temp = temp->next ;
            idx++;
           

        }
        return -1;
    }




    void printLL() {    //O(n) 
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

   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);   //1->2->3->NULL

   ll.insert(4,1);     //1->4->2->3->NULL
    
   ll.printLL();

   cout<<"Key at index: "<<ll.Search(3)<<endl;
   return 0;

}
