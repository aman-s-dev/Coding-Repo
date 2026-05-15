#include<bits/stdc++.h>
using namespace std;

// Hashing
const int table_size=10;
int hash_table[table_size];

void initializer(){
    for (int i=0; i<table_size; i++){
        hash_table[i]=-1;
    }
}

int hash_function(int key){
    return key%table_size;
}

void insert(int key){
    int index = hash_function(key);
    while(hash_table[index]!=-1){
        index=(index+1)%table_size;
    }
    hash_table[index]=key;

}

void display(){
    for (int i=0; i<table_size; i++){
        cout<<i<<"---->"<<hash_table[i]<<endl;
    }
}

int main(){
    // SET 
    
    // Ordered (default) and unordered set
    // set<int> set1 = {1,3,3,8,5,6,9,5,9,6} ;
    // unordered_set<int> set2 = {11,13,13,18,15,16,19,15,19,16} ; 
    // for (int x:set1){ cout<<x<<" " ;}
    // cout<<"\n";
    // for (int x:set2){ cout<<x<<" " ;}
    // set1.insert(set2.begin(),set2.end());
    // set1.erase(9);
    // for (int x:set1){ cout<<x<<" " ;}
    // int sum = accumulate(set1.begin(), set2.end(),0);
    // vector<int> v(set1.begin(),set1.end());j




    // Hashing
    insert(12);
    insert(13);
    insert(14);
    insert(16);
    insert(26);
    insert(36);
    display();




    
    
    
    
}
