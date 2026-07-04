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
    return key%table_size;
}

void insert(int key){
    if (current_elements >= table_size) {
        cout << "Error: Hash Table is full! Cannot insert " << key << endl;
        return;
    }
    int index = hash_function(key);
    
    // Linear Probing
    while(hash_table[index]!=-1){
        index=(index+1)%table_size;
    }
    hash_table[index]=key;
    current_elements++;

}

void display(){
    for (int i=0; i<table_size; i++){
        cout<<i<<"---->"<<hash_table[i]<<endl;
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
