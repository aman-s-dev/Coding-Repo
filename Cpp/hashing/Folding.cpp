#include<bits/stdc++.h>
using namespace std;

// Hashing
const int table_size=10;
int hash_table[table_size];
int numof_elements=0;

void initializer(){
    for (int i=0; i<table_size; i++){
        hash_table[i]=-1;
    }
}

int hash_function(int key){
    // Folding
    int num = key;
    int sum = 0;
    while (num>0){
        sum+=num%100;
        num/=100;
    }
    return sum%table_size;
}

void insert(int key){
    if (numof_elements >= table_size) {
        cout << "Error: Hash Table is full! Cannot insert " << key << endl;
        return;
    }
    int index = hash_function(key);
    hash_table[index]=key;
    numof_elements++;

}

void display(){
    for (int i=0; i<table_size; i++){
        cout<<i<<"---->"<<hash_table[i]<<endl;
    }
}

int main(){
    // Hashing
    initializer();
    insert(12832);
    insert(15983);
    insert(12954);
    insert(12846);
    insert(22976);
    insert(32936);
    display();    
}
