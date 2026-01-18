#include<iostream>
using namespace std;
class qu{
    private:
    int arr[10];
    int front,rear;
    public:
    qu(){
        front =-1;
        rear=-1;
    }
    void enqu(int val){
        if (rear == 9){
            cout << "Full queue"<<endl;
            return ;
        }
        if(front==-1 )
        front =0;
        arr[++rear]=val;
    }
    void dequ(){
        if(isEmpty()){
            cout<<"Quue empty"<<endl;
            return;
        }
        front++;
        if (front >rear){
            front =rear=-1;
        }
    }
    int peek(){
        if(isEmpty()){
            cout<< "queue empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty(){
        return (front ==-1 or front > rear);
    }
    void display(){
        if(isEmpty()){
            cout << "Queue is empty"<<endl;
            return;
        }
        cout << "Queue : ";
        for(int i=front ;i<=rear ; i++){
            cout << arr[i]<<" ";
           
        }
        cout << endl;
    }
};
int main(){
    qu q;
    q.enqu(10);
    q.enqu(20);
    q.enqu(30);
    q.display();
    q.dequ();
    q.display();
    cout <<"Front : "<<q.peek()<<endl;
    return 0;
}


class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Node {
    int data;
    Node next;
 
    Node(int x) {
        data = x;
        next = null;
    }
}
 
class Queue {
    Node head, tail;
 
    Queue() {
        head = null;
        tail = null;
    }
 
    
    void enqueue(int x) {
        Node newNode = new Node(x);
        if (head == null && tail == null) {
            head = tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }
 
 
    void dequeue() {
        if (head == null) {
            System.out.println("Empty queue");
            return;
        }
        head = head.next;
        if (head == null) {
            tail = null;
        }
    }
 
  
    void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
}
 
public class Main {
    public static void main(String[] args) {
        Queue q = new Queue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.display();
        q.dequeue();
        q.display(); 
        q.dequeue();
        q.dequeue();
        q.dequeue(); 
    }
}
 
DIPTI BHARTI
class Node { int data; Node next; Node(int x) { data = x; next = null; }}class Queue { Node head, tail; Queue() { head = null; tail = null; } void enqueue(int x) { Node newNode = new Node(x); if (head…
Done ma'am 
 
#include <iostream>

using namespace std;
 
struct Node {

    int data;

    Node* next;
 
    Node(int val) {

        data = val;

        next = nullptr;

    }

};
 
class Queue {

    Node* front;

    Node* rear;
 
public:

    Queue() {

        front = rear = nullptr;

    }
 
    void enqueue(int x) {

        Node* newNode = new Node(x);

        if (rear == nullptr) {

            front = rear = newNode;

            return;

        }

        rear->next = newNode;

        rear = newNode;

    }
 
    void dequeue() {

        if (front == nullptr) {

            cout << "Queue is empty" << endl;

            return;

        }

        Node* temp = front;

        front = front->next;
 
        if (front == nullptr) {

            rear = nullptr;

        }
 
        delete temp;

    }

    void display() {

        if (front == nullptr) {

            cout << "Queue is empty" << endl;

            return;

        }

        Node* temp = front;

        while (temp != nullptr) {

            cout << temp->data << " ";

            temp = temp->next;

        }

        cout << endl;

    }

    ~Queue() {

        while (front != nullptr) {

            dequeue();

        }

    }

};
 
int main() {

    Queue q;
 
    q.enqueue(11);

    q.enqueue(22);

    q.enqueue(33);

    q.enqueue(44);

    q.display();     
 
    q.dequeue();      

    q.display();      
 
    return 0;

}

 