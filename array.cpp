#include <iostream>
using namespace std;
 int main(){
//     int k;
//     int a[]={0,1,2,3,4,5,6,7,8,9};
//     for (int i=0; i<=9; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"enter the 11th element: ";
//     cin>>k;
//     a[11]=k;
//     for (int i=0; i<=10; i++){
//         cout<<a[i]<<endl;
//     }
//     float sum=0;
//     float e,h,m,cs,c;
//     cout<<"Enter Marks in order(Computer, Chemistry, English, Maths, Hindi): "<<endl;
//     cin>>cs>>c>>e>>m>>h;
//     float marks[5]={e,h,m,cs,c};
//     for (int i=0; i<=4; i++){
//         sum+=marks[i];
//     }
//     double average=sum/5;
//     cout<<"Sum = "<<sum<<endl;
//     cout<<"Average = "<<average<<endl;
//     double pctg = average;
//     cout<<"Percentage = "<<pctg<<"%"<<endl;
//     if (pctg>=75){
//         cout<<"FIRST DIVISION !!!"<<endl;
//     }
    int n,e ;
    cout<<"Enter how many values to store : ";
    cin>>n;
    int input[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th element : ";
        cin>>e;
        input[i]=e;
    }
    cout<<endl;
    for (int i=0; i<=n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;    
}