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
    // int n,e ;
    // cout<<"Enter how many values to store : ";
    // cin>>n;
    // int input[n];
    // for (int i=0; i<n; i++){
    //     cout<<"Enter the "<<i<<"th element : ";
    //     cin>>e;
    //     input[i]=e;
    // }
    // cout<<endl;
    // for (int i=0; i<=n; i++){
    //     cout<<input[i]<<" ";
    // }
    // cout<<endl;

    // //array ke andr array = matrix
    
    // //Matrices elements input
    // int m,n;
    // cout<<"Enter the order of the 2 matrices(m,n) : ";
    // cin>>m>>n;
    // int a[m][n], b[m][n], c[m][n];
    // for (int i=0; i<m; i++){
    //     for (int j=0; j<n; j++){
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // for (int i=0; i<m; i++){
    //     for (int j=0; j<n; j++){
    //         cout<<"b["<<i<<"]["<<j<<"] = ";
    //         cin>>b[i][j];
    //     }
    // }
    // // matrix addition
    // int x,y;
    // for (int i=0; i<m; i++){
    //     for (int j=0; j<n; j++){
    //         c[i][j] = a[i][j] + b[i][j];
    //     }
    // }
    // for (int i=0; i<m; i++){
    //     for (int j=0; j<n; j++){
    //         cout<<c[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //WAP to find out the additon of all numbers of an array, addition of all even and odd numbers
    // int n,e ;
    // cout<<"Enter how many values to store : ";
    // cin>>n;
    // int a[n];
    // for (int i=0; i<n; i++){
    //     cout<<"Enter the "<<i<<"th element : ";
    //     cin>>e;
    //     a[i]=e;
    // }
    // cout<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int sum=0, os=0, es=0, odd=0, ei=0, oi=0 ;
    // for (int i=0; i<n; i++){
    //     sum+=(a[i]);
    // }
    // cout<<"sum of all numbers of the array = "<<sum<<endl;
    // for (int i=0; i<n; i++){
    //     if ((a[i])%2==0){
    //         es=es+a[i];
    //     }
    //     else {
    //         odd=a[i];
    //         os=os+odd;
    //     }
    // }
    // cout<<"sum of evens = "<<es<<endl;
    // cout<<"sum of odds = "<<os<<endl;
    // cout<<endl;
    // odd=0;
    // for (int i=0; i<n; i++){
    //     if (i%2==0){
    //         ei=ei+a[i];
    //     }
    //     else {
    //         odd=a[i];
    //         oi=oi+odd;
    //     }
    // }
    // cout<<"sum of even index numbers = "<<ei<<endl;
    // cout<<"sum of odd  index numbers = "<<oi<<endl;
    // cout<<endl;

    // // WAP to find the biggest & smallest number in the array
    // int n,e ;
    // cout<<"Enter how many values to store : ";
    // cin>>n;
    // int a[n];
    // for (int i=0; i<n; i++){
    //     cout<<"Enter the "<<i<<"th element : ";
    //     cin>>e;
    //     a[i]=e;
    // }
    // cout<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int big=a[0],small=a[0],locb=0, locs=0;
    // for (int i=0; i<n; i++){
    //     if(a[i]>big){
    //         big=a[i];
    //         locb = i;
    //     }
    //     else if (a[i]<small){
    //         small=a[i];
    //         locs = i;
    //     }
    // }
    // cout<<big<<" at "<<locb<<"th index"<<endl;
    // cout<<small<<" at "<<locs<<"th index"<<endl;

    // //WAP to print marks of top 3 students
    // int ns,marks ;
    // cout<<"Enter how many values to store : ";
    // cin>>ns;
    // int m[ns];
    // for (int i=0; i<ns; i++){
    //     cout<<"Enter the marks of student ("<<(i+1)<<") : ";
    //     cin>>marks;
    //     m[i]=marks;
    // }
    // int h1=0, h2=0, h3=0;
    // cout<<endl;
    // for (int i=0; i<ns; i++){
    //     if (m[i]>h1){
    //         h3=h2;
    //         h2=h1;
    //         h1=m[i];
    //     }
    //     else if (m[i]<h1 && m[i]>h2){
    //         h3=h2;
    //         h2=m[i];
    //         }
    //     else if (m[i]<h2 && m[i]>h3){
    //         h3=m[i];
    //     }
    // }
    // cout<<h1<<" "<<h2<<" "<<h3<<endl;

    // //number Palindrome check by GEMINI
    // int n, originalNum, remainder, reversedNum = 0;
    // cout << "Enter a positive integer: ";
    // cin >> n;

    // // Store the original value because 'n' will be destroyed in the loop
    // originalNum = n;

    // // Logic to reverse the number
    // while (n > 0) {
    //     remainder = n % 10;                  // 1. Get the last digit
    //     reversedNum = (reversedNum * 10) + remainder; // 2. Append it to reversedNum
    //     n = n / 10;                          // 3. Remove the last digit from n
    // }

    // // Check if the reversed number matches the original
    // if (originalNum == reversedNum) {
    //     cout << originalNum << " is a Palindrome number.";
    // } else {
    //     cout << originalNum << " is NOT a Palindrome number.";
    // }

    // //number Palindrome check by AMAN SHUKLA (in vector.cpp)

     return 0;    
}
