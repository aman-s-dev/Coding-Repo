#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the code for the day: ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    default:
        cout<<"Invalid code....enter a number between 1 to 3"<<endl;
        break;
    }

    float n1,n2;
    char op;
    cout<<"Enter the two operands: ";
    cin>>n1>>n2;
    cout<<"Enter the operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Sum = "<<n1+n2;
        break;
    case '-':
        cout<<"Difference = "<<n1-n2;
        break;
    case '*':
        cout<<"Product = "<<n1*n2;
        break;
    case '/':
        if (n2!=0){
            cout<<"Quotient = "<<n1/n2;
        }
        else{
            cout<<"Error! Division by ZERO";
        }
        break;
    default:
        cout<<"Invalid input for operation";
        break;
    }
    return 0;
}