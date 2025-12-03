#include <iostream>
using namespace std;
int main(){
    // null pointer
    int* var;   
    cout<<*var<<endl;
    // pointer
    int x=23;
    int* ptr=&x;
    cout<<ptr<<endl;
    // pointer - another denotation:  int *ptr=&x;
    // printing address directly:
    cout<<&x<<endl;
    // address of the pointer:
    cout<<&ptr<<endl;
    // pointer for pointer:
    int** ptr2=&ptr;
    cout<<ptr2<<endl;
    // pointer without a datatype
    //

} 