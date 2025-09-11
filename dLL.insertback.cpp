#include<bits/stdc++.h>
using namespace std;

struct ListNode {       //Initialization
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(int x,ListNode* next = nullptr,ListNode* prev = nullptr) : val(x),next(next),prev(prev) {}
};

class DoublyList {
public:                                                    //here we make it public bcoz of parametrized printfun(below) so it can take head either we can do same as prev ---push_front.cpp(prev page)
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

    void printLL(ListNode* temp) {                         //we can do w/o parameter also(see prev insertion from front in prev program) , by creating a new node
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

    LL.printLL(LL.head);                       //w/o parameter just write ---LL.printLL()------nut to do this we have to update printLL func by removing parameter ie inside bracket.
    return 0;
}