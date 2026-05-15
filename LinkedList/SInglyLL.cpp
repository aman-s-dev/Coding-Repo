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

class SinglyLL {    //This class is ued for LinkedList
    Node* head;
    Node* tail;
    public:
        LinkedList() {    //constructor of LinkedList class
            head = NULL;
            tail = NULL;
        }
        
        // Insertion
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
            ptr->next = temp->next;
            temp->next = ptr;
            if (ptr->next == NULL) {
                tail = ptr;
            }
        }
            
        // Deletion 
    
        void delete_from_front() {
            if (head == NULL) {
                cout << "List is empty, nothing to delete." << endl;
                return;
            }
    
            Node* temp = head;
            head = head->next;
    
            if (head == NULL) {
                tail = NULL;
            }
    
            cout << "Deleted: " << temp->data << endl;
            delete temp;
        }
    
        void delete_at_position(int position) {
            if (head == NULL) {
                cout << "List is empty\n";
                return;
            }
    
            Node* temp = head;
    
            if (position == 1) {
                head = temp->next;
                // if (head == NULL) {tail = NULL;}
                delete temp;
                return;
            }
    
            Node* prev = NULL;
            for (int i = 1; i < position && temp != NULL; i++) {
                prev = temp;
                temp = temp->next;
            }
    
            if (temp == NULL) {
                cout << "Position out of range\n";
                return;
            }
    
            prev->next = temp->next;
    
            if (temp == tail) {
                tail = prev;
            }
    
            delete temp;
        }
    
        void delete_by_value(int value){
            if (head==NULL){
                return;
            }
            if (head->data==value){
                Node* temp=head;
                head=head->next;
                delete temp;
                return;
            }
            Node* temp=head;
            while (temp->next!=NULL && temp->next->data!=value){
                temp=temp->next;
            }
            if (temp->next==NULL){
                cout<<"value not found";
                return;
            }
            Node* ptr = temp->next;
            temp->next=temp->next->next;
            delete ptr;
        }
    
        void delete_from_end() {
            if (head == NULL) {
                cout << "List is empty, nothing to delete." << endl;
                return;
            }
        
            if (head == tail) {
                cout << "Deleted: " << head->data << endl;
                delete head;
                head = tail = NULL;
                return;
            }
        
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
        
            cout << "Deleted: " << tail->data << endl;
            delete tail;
        
            tail = temp;
            tail->next = NULL;
        }
            
        // Searching
        bool search(int value){   //linear search   head to tail   but only checks presence
            Node* temp = head;
            while (temp!=NULL){
                if (temp->data == value){
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
        int searchPosition(int value){
            Node* temp = head;
            int pos = 1;
            while (temp!=NULL){
                if (temp->data==value){
                    return position;
                }
                temp = temp->next;
                position++;
            }
            return -1;
        }
    
        // Display
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
    SinglyLL obj;

    obj.insert_at_beginning(10);
    obj.insert_at_beginning(20);
    obj.insert_at_beginning(30);

    obj.display();

    return 0;
}


// At End