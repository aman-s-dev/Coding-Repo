#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //Write a program to input three numbers and determine which number is the largest among them
    int x,y,z;
    cout<<"Enter the three numbers to know the largest one: "<<endl;
    cin>>x>>y>>z;
    if (x>y && x>z){
        cout<<"Largest number is: "<<x;
    }
    else if (y>z){
        cout<<"Largest number is: "<<y;
    }
    else{
        cout<<"Largest number is: "<<z;
    }
    cout<<endl;
    
    //Write a program to input two numbers and display the numbers after swapping their values.
    int p,q,d;
    cout<<"Enter the numbers to be swapped: ";
    cin>>p>>q;
    d=q-p;
    p=p+d;
    q=q-d;
    cout<<p<<" "<<q<<endl;

    /*Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary while the HRA is 15% of the basic salary.
     Provident Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA). Program to calculate the Net Salary.*/
    int salary;
    float gross,net;
    cout<<"Enter your basic salary: ";
    cin>>salary;
    gross=salary*(1+0.25+0.15);
    net=gross*0.9;
    cout<<"Net salary is: "<<net<<endl;

    // Write a program to input 4-digits number and display the sum of digits
    int num,sum=0;
    cout<<"Enter a four-digit number: ";
    cin>>num;
    while (num>0){
        sum+=num%10;
        num=floor(num/10);
    }
    cout<<"Sum of digits: "<<sum<<endl;

    // Write a program to input three numbers and determine which number is the largest among them.Using Ternary Operator
    int a,b,c;
    cout<<"Enter the three numbers to know the largest one: "<<endl;
    cin>>a>>b>>c;
    int first = (a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"Largest number is: "<<first<<endl;

    // Write a program to input a year and check the input year is leap year or not using ternary operator
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    (year%4==0)?(cout<<"Year "<<year<<" is a leap year"<<endl):(cout<<"Year "<<year<<" is a non-leap year"<<endl);

    //Write a program to input a 4 digits number and check the input number is palindrome or not using ternary Operator
    int n;
    cout<<"Enter the number to check if it is a palindrome or not: ";
    cin>>n;
    // (floor(n/1000)==n%10 && (n/100)%10==floor((n%100)/10))?(cout<<"It's a palindrome"<<endl):(cout<<"It's not a plaindrome"<<endl);
    int rev = (n % 10) * 1000;
    rev+= ((n / 10) % 10) * 100;
    rev += ((n / 100) % 10) * 10;
    rev+= (n / 1000) * 1;
    string result = (n == rev) ? "is a PALINDROME." : "is NOT a palindrome.";
    cout<<n<<" "<<result<<endl;
    return 0;
}

