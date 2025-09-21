#include<bits/stdc++.h>
using namespace std;

struct ListNode {
public:
     int val;
     ListNode* next;
     
     ListNode(int x):val(x),next(nullptr) {}
};

class List {
public:
    ListNode* head;
    List() : head(nullptr) {}


   //main func
   ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* first = head;
        ListNode* sec  = head->next;
        ListNode* prev  = NULL;

        while(first != NULL && sec != NULL) {
            ListNode* third = sec->next;

            sec->next = first;
            first->next = third;

            if(prev != NULL) {
                prev->next = sec;
            } else {
                head = sec;
            }

            //update
            prev = first;
            first = third;
            if(third != NULL){
                sec = third->next;
            } else {
                sec = NULL;
            }
        }

        return head;

    }

     void printLL() {        //O(n)
        ListNode *temp = head;
        while(temp != NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;;
      }
};

int main() {
    List myList;

    // Manually creating the linked list: 1 → 2 → 3 → 4
    myList.head = new ListNode(1);
    myList.head->next = new ListNode(2);
    myList.head->next->next = new ListNode(3);
    myList.head->next->next->next = new ListNode(4);

    cout<<"Original List: \n";
    myList.printLL();



    // Swap pairs
    myList.head = myList.swapPairs(myList.head);

    cout<<"Swapped List: \n";
    myList.printLL();

    return 0;
}


    
  