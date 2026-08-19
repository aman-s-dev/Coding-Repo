#include<iostream>
using namespace std;

class Deque{
    int size, *dq, front, rear;

    Deque(int n){
        size = n;
        dq = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return rear == size - 1 && front == 0;
    }

    void insFront(int val){
        if (front == 0){
            cout<<"No space at Front\n";
            return;
        }
        if (front == -1){
            front = rear = 0;
        }
        else {
            front = front - 1;
        }
        dq[front] = val;
        return;
    }

    void insRear(int val){
        if (isFull()) {
            cout<<"Overflow !!!\n";
            return;
        }
        if (front == -1)  front = 0;
        rear += 1;
        q[rear]=val;
        return;
    }

    void dltFront(){
        if (isEmpty()){
            cout<<"UnderFlow !!!\n";
            return;
        }
        if (isEmpty()){
            cout<<"UnderFlow !!!\n";
            return;
        }
        cout<<"Deleted Value: "<<dq[front]<<"\n";
        front = front+1;
        if (front>rear){
            front = rear = -1;
        }
        return;
    }
    
    void dltRear(){
        if (isEmpty()){
            cout<<"UnderFlow !!!\n";
            return;
        }
        cout<<"Deleted Value: "<<dq[rear]<<"\n";
        rear = rear - 1;
        if (rear<front){
            front=rear=-1;
        }
        return;
    }
    void peekFront(){
        if (isEmpty()) {
                cout<<"Queue is Empty\n";
                return;
            }
        cout<<"Front Element : "<<q[front]<<"\n";
        return;
    }
    void peekRear(){
        if (isEmpty()) {
                cout<<"Queue is Empty\n";
                return;
            }
        cout<<"Rear Element : "<<q[rear]<<"\n";
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
