#include <iostream>
using namespace std;
int main(){
    // pointer is a special variable that stores the address of another variable.
    // pointer
    int x=23;
    int* ptr=&x;
    cout<<ptr<<endl;
    // pointer - another denotation:  int *ptr=&x;
    // printing address directly:
    cout<<&x<<endl; // 'address of' operator (&)
    // address of the pointer:
    cout<<&ptr<<endl;
    // pointer to pointer(**):
    int** parptr=&ptr; //parent pointer
    cout<<parptr<<endl;
    // dereference operator (*) : value stored at the address pointed by the pointer
    cout<<*(&x)<<"\n";
    cout<<*ptr<<endl;
    cout<<**parptr<<endl;
    cout<<ptr<<endl;
    cout<<*parptr<<endl;
    // null pointer (points to no memory location, shows 0x0 or 0 or nothing)
    int* var;
    int* nptr = NULL;   
    int** parvar=NULL; // ** is valid, signifies the same
    cout<<parvar<<endl;
    cout<<endl; //gives 'segmentation fault' (kisi kisi system me nhi bhi deta h), since null pointer points at NULL
    

    // pointer without a datatype
    //

} 