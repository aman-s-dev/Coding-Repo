#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value) {  //constructor of node class
            data = value;
            next = NULL;
            prev = NULL;
        }     
};

class DoublyLL {    //This class is used for LinkedList
    Node* head;
    Node* tail;
    public:
        DoublyLL() {    //constructor of LinkedList class
            head = tail = NULL;
        }
    
        // Insertion
        void insert_at_beginning(int value) {  //The function is used to add new node at the beginning of LinkedList
            Node* ptr = new Node(value);       //ptr id the pointer name of new Node
    
            if (head == NULL) {
                head->prev = ptr;
            } 
            ptr->next = head;
            head = ptr;
            }
        }
        
        void insert_at_end(int value){
            Node* ptr = new node(value);
            if (head==NULL){
                head=tail=ptr;
                return;
            }
            Node* temp = head;
            while (temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            tail=ptr;
        }
        
        void insert_at_position(int value, int position) {
            if (position <= 0) {
                cout << "Invalid position" << endl;
                return;
            }
            if (position == 1) {
                insert_at_beginning(value);
                return;
            }
            Node* ptr = new Node(value);
            Node* temp = head;
            for (int i = 1; i < position - 1 && temp != NULL; i++) {
                temp = temp->next;
            }
            if (temp == NULL) {
                cout << "Position out of range" << endl;
                delete ptr;
                return;
            }
    
            if (temp->next == NULL){
                insert_at_end(value);
                return;
            }
            ptr->next = temp->next;
            ptr->prev=temp;
            temp->next->prev = ptr;
            temp->next = ptr;
    
            if (ptr->next == NULL) {
                tail = ptr;
            }
        }
        

        void display() {
            if (head == NULL) {
                cout << "Linked List is empty" << endl;
                return;
            }
    
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }   
};
