#include<iostream>
using namespace std;
 
class Queue{                                    // using ARRAY
    private:
    int *q;       // Why a pointer
    int size;
    int front;
    int rear;

    public:
    Queue(int n){
        size = n;
        q = new int[size];    // WTF just happened ???
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        return (front == -1)  ;
    }

    bool isFull(){
        if (rear == size - 1)  return true;
        else return false;
    }

    void enqueue(auto val){
        if (isFull()) {
            cout<<"Overflow !!!\n";
            return;
        }
        if (front == -1)  front = 0;
        rear += 1;
        q[rear]=val;
        return;
    }

    void dequeue() {
        if (isEmpty()){
            cout<<"Underflow !!!\n";
            return;
        }
        cout<<"Deleted value : "<<q[front]<<"\n";
        front += 1;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
        return;
    }

    void peek(){
        if (isEmpty()) {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Front Element : "<<q[front]<<"\n";
        return;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        for (int i=front; i<=rear; i++) cout<<q[i]<<" ";
        cout<<"\n";
        return;
    }
};


//------------------------------------------------------------------------------

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class QueueLL{                                    // using LINKED LIST
    public:
    Node* front;
    Node* rear;
    QueueLL(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty(){
        return front == NULL;
    }
    // No isFull() 

    void enqueue(auto val){
        Node* ptr = new Node(val);
        if (front == NULL){
            front = ptr;
            rear = ptr;
            return;
        }
        rear->next = ptr;
        rear = ptr;
        return;  
    }

    void dequeue() {
        if (isEmpty()){
            cout<<"Underflow !!!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        cout<<"Deleted Front Element : "<< temp->data <<"\n";
        delete temp;
        if (front == NULL){
            cout<<"Queue is Empty now !\n";
            rear = NULL;
        }
        return;
    }

    void peek(){
        if (isEmpty()) {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Front Element : "<< front->data <<"\n";
        return;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        Node* temp = front;
        while (temp != NULL)  {
            cout<< temp->data <<" ";
            temp = temp->next;
        }
        cout<<"\n";
        return;
    }
};

//-----------------------------------------------------------------------------
class CircularQ{                         // CIRCULAR QUEUE  using ARRAY  
    private:
    int *q;       // Why a pointer
    int size;
    int front;
    int rear;

    public:
    CircularQ(int n){
        size = n;
        q = new int[size];    
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        return (front == -1);
    }

    bool isFull(){
        return ((rear+1)%size == front);
    }

    void enqueue(auto val){
        if (isFull()) {
            cout<<"Overflow !!!\n";
            return;
        }
        if (front == -1)  front = 0;
        rear = (rear+1)%size;
        q[rear]=val;
        return;
    }

    void dequeue() {
        if (isEmpty()){
            cout<<"Underflow !!!\n";
            return;
        }
        cout<<"Deleted value : "<<q[front]<<"\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        }else front = (front + 1)%size;
        return; 

    }

    void peek(){
        if (isEmpty()) {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Front Element : "<<q[front]<<"\n";
        return;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        for (int i=0; i<size; i++) cout<<q[(front+i)%size]<<" ";
        cout<<"\n";
        return;
    }
};
// ----------------------------------------------------------------------

// "Node" Class

class CircularQLL{                                    // using LINKED LIST
    public:
    Node* front;
    Node* rear;
    CircularQLL(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty(){
        return (front == NULL);
    }
    // No isFull() 

    void enqueue(auto val){
        Node* ptr = new Node(val);
        if (front == NULL){
            front = ptr;
            rear = ptr;
            return;
        }
        rear->next = ptr;
        rear = ptr;
        ptr->next = front;
        return;  
    }

    void dequeue() {
        if (isEmpty()){
            cout<<"Underflow !!!\n";
            return;
        }
        Node* temp = front;
        if (front == rear){
            int val = temp->data;
            delete temp;
            cout<<"Deleted Front Element : "<< val <<"\n";
            front = rear = NULL;
            cout<<"Queue is Empty now !\n";
            return;
        }
        front = front->next;
        rear->next = front;
        cout<<"Deleted Front Element : "<< temp->data <<"\n";
        delete temp;
        return;
    }

    void peek(){
        if (isEmpty()) {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Front Element : "<< front->data <<"\n";
        return;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        Node* temp = front;
        do{
            cout<< temp->data <<" ";
            temp = temp->next;
        }while (temp != front)  ;
        cout<<"\n";
        return;
    }
};



//==============================================================================

int main(){
    // cout<<"Circular Queue using Linked List\n";
    // int n;
    // cin>>n;

    CircularQLL q;  
    int choice;
    int val;

    do{          
        cout<<"\n1. Enqueue \t";
        cout<<"2. Dequeue \t";
        cout<<"3. Peek \t";
        cout<<"4. Display \t";
        cout<<"5. Exit \n";
        cout<<"Enter your operation : ";
        cin>>choice;
        switch(choice){
            case 1:
                cin>>val;
                q.enqueue(val);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid choice\n";
        }
    } while (choice != 5);
    return 0;

}