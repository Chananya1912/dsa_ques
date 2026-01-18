#include<iostream>
using namespace std;
 
class node {
public:
    int data;
    node* next;
    node() {
        this->data = 0;
        this->next = NULL;
    }
};
 
void insertion_start(int data, node* &head) {
    if (head == NULL)
     {
        node* newnode = new node();
        head = newnode;
        newnode->data = data;
        newnode->next = NULL;
        return;
    }
    node* newnode = new node();
    newnode->next = head;
    head = newnode;
    newnode->data = data;
    return;
}
 
void insert_last(int data, node* &head) {
    if (head == NULL) {
        node* newnode = new node();
        head = newnode;
        newnode->data = data;
        newnode->next = NULL;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    node* newnode = new node();
    temp->next = newnode;
    newnode->data = data;
    newnode->next = NULL;
    return;
}
    /*ListNode* reverseList(ListNode* head) {
ListNode* current=head;
ListNode* prev=NULL;
ListNode* temp=NULL;
while(current!=NULL)
{
temp=current->next;
current->next=prev; zz
prev=current;
current=temp;
}
head=prev;
return head;
}*/
int main() 
{
    node* head = NULL;
    insertion_start(10, head);
    insertion_start(20, head);
    insertion_start(30, head);  
    insert_last(40, head);
    insert_last(50, head);
    return 0;
}

