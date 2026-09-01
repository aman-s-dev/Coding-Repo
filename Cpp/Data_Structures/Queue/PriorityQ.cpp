#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    int priority;
    Node* next;

    Node(int x, int prt){
        this->val = x;
        this->priority = prt;
        this->next = NULL;
    }
};

class PQLL{
    private:
    int front;

    public:
    PQLL(){
        front = NULL;
    }

    bool isEmpty{
        return front == NULL;
    }

    void insert(int val, int prt){
        Node* ptr = new Node(val, prt);
        if (isEmpty() || front->priority > prt){
            ptr->next = front;
            front = ptr;
            return;
        }
        Node* temp = front;
        while (temp->next != NULL && temp->next->priority <= prt){
            temp = temp->next;            
        }
        ptr->next = temp->next;
        temp->next = ptr;
        return; 
    }

    void peek(){}

    void display(){}
}