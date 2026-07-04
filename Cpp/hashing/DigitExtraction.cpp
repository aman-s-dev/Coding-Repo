#include<bits/stdc++.h>
using namespace std;

// Hashing
const int table_size=10;
int hash_table[table_size];
int current_elements=0;

void initializer(){
    for (int i=0; i<table_size; i++){
        hash_table[i]=-1;
    }
}

int hash_function(int key){
    // Digit Extraction
    int d1 = key%10;
    int d2 = (key/10)%10;
    return (d1+d2)%table_size;
}

void insert(int key){
    if (current_elements >= table_size) {
        cout << "Error: Hash Table is full! Cannot insert " << key << endl;
        return;
    }
    int index = hash_function(key);
    hash_table[index]=key;
    current_elements++;

}

void display(){
    for (int i=0; i<table_size; i++){
        cout<<i<<" --> "<<hash_table[i]<<endl;
    }
}

int main(){
    // Hashing
    initializer();
    insert(12);
    insert(13);
    insert(14);
    insert(16);
    insert(26);
    insert(36);
    display();    
}
