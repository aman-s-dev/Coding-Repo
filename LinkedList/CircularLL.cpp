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

class CircularLL {    //This class is used for LinkedList
    Node* head;
    Node* tail;

    public:
        CircularLL() {    //constructor of LinkedList class
            head = tail = NULL;
        }
    
        // Insertion
        void insert_at_beginning(int value) {  
            Node* ptr = new Node(value);       
            if (head == NULL) {
                head = tail = ptr;
                tail->next=head;
                return; 
            }
            ptr->next = head;
            head = ptr;
            tail->next=head;
        }
    
        void insert_at_end(int value){
            Node* ptr = new Node(value);
    
            if (tail == NULL){
                head = tail = ptr;
                tail->next=head;
                return;
            }
            ptr->next = tail->next;
            tail->next = ptr;
            tail = ptr;
        }
    
        void insert_at_position(int value, int position) {            //DOUBT
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
            for (int i = 1; i < position - 1; i++) {
                temp = temp->next;
                if (temp==tail->next){
                    cout<<"Invalid position";
                    return;
                }
            }
            ptr->next = temp->next;
            temp->next = ptr;
            if (temp==tail) {
                tail = ptr;
            }
        }

        void delete_at_position(int value, int position){
            if (position<=0){
                cout<<"Invalid Position";
                return;
            }
            if (position==1){
                if (head==NULL) {
                    cout<<"Empty LL";
                    return;
                }
                if (head==tail){
                    delete head;
                    tail=NULL;
                    return;
                }
                tail->next=head->next;
                delete head;
                head=tail->next;
            }

            if (position>1){
                if (head==NULL) {
                    cout<<"Empty LL";
                    return;
                }
                Node* temp = head;
                for (int i=1; i<position-1; i++){
                    temp=temp->next;
                    if (temp==tail->next){
                        cout<<"Invalid Position";
                        return;
                    }
                } 
                if (temp->next==tail){
                    tail=temp;
                }
                Node* ptr = temp->next;
                temp->next=temp->next->next;
                ptr->next=NULL;
                delete ptr;
            }

        }
    
        // Searching
        int search(int key){
            if (head==NULL){
                cout<<"Empty";
                return 0;
            }
            Node* temp=head;
            int position=1;
            do{
                if(temp->data==key){return position;}
                temp=temp->next;
                position++;
            }while (temp!=head);
            retun -1;
        }
    
        // Display
        void display(){
            
        }
}