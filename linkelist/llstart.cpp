#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
    node (int x)
    {
        data=x;
        next=nullptr;
    }
};
node*head=nullptr;
node*tail=nullptr;
node*temp=nullptr;
void insertnode(int x)
{
node*temp= new node( x);
if(head==nullptr)
{
    head=temp;
    tail=temp;
}
else{
    tail->next=temp;
    tail=temp;
}
}
void printll(node * p)
{
    while(p != nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void deldupsort(node * head)
{
    node*curr=head;
    while(curr != nullptr && curr->next!= nullptr)
    {
        if(curr->data == curr->next->data)
        {
            node*t=curr->next;
            curr->next = curr->next->next;
            delete t;
        }
        else{
        curr=curr->next;
        }
    }
}
int main()
{
    cout<<"enter num of nodes";
    int n;
    cin>>n;
    int x;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        insertnode( x);
    }
     deldupsort(head);
    cout << "Linked List: ";
    printll(head);
     return 0;
}