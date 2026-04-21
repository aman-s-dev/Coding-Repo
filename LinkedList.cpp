#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {  //constructor of node class
        data = value;
        next = NULL;
    }
};

class LinkedList {    //This class is ued for LinkedList
    Node* head;
    Node* tail;
public:
    LinkedList() {    //constructor of LinkedList class
        head = NULL;
        tail = NULL;
    }

    void insert_at_beginning(int value) {  //The function is used to add new node at the beginning of LinkedList
        Node* ptr = new Node(value);       //ptr id the pointer name of new Node

        if (head == NULL) {
            head = tail = ptr;
        } else {
            ptr->next = head;
            head = ptr;
        }
    }

    void insert_at_end(int value){
        Node* ptr = new Node(value);

        if (head == NULL){
            head = tail = ptr;
        } else {
            tail->next = ptr;
            tail=ptr;
        }
    }

    void insert_at_position(int value){
        
    }

    void delete_front(){
        if (head==NULL){ cout<<"Empty"; }
        else {
           Node* temp=head;
           head=head->next;
           delete temp;
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

int main() {
    LinkedList obj;

    obj.insert_at_beginning(10);
    obj.insert_at_beginning(20);
    obj.insert_at_beginning(30);

    obj.display();

    return 0;
}


// At End