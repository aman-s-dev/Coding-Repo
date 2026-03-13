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

    // int p,q,r;
    // cout<<"Matrix Multiplication: AB\nEnter the order matrix A(p,q) : ";
    // cin>>q>>p;
    // int A[p][q];
    // for (int i=1; i<=p; i++){
    //     for (int j=1; j<=q; j++){
    //         cout<<"A["<<i<<"]["<<j<<"] = ";
    //         cin>>A[i][j];
    //     }
    // }
    // cout<<"Enter the order matrix B(q,r) : ";
    // cin>>q>>r;
    // int B[q][r];
    // for (int i=1; i<=q; i++){
    //     for (int j=1; j<=r; j++){
    //         cout<<"B["<<i<<"]["<<j<<"] = ";
    //         cin>>B[i][j];
    //     }
    // }   
    // int sump[q][r];
    // int sum=0; 
    // for (int t=1; t<=r; t++){
    //     for (int i=1; i<=p; i++){
    //         for(int s=1,j=1; s<=q && j<=q; s++, j++){
    //             sum+=((A[i][j])*(B[s][t]));
    //         }
    //         sump[i][t]=sum;
    //         sum=0;
    //     }
    // }
    // cout<<"Product AB = C :"<<endl;
    // for (int i=1; i<=p; i++){
    //     for (int j=1; j<=r; j++){
    //         cout<<sump[i][j]<<" ";
    //     }
    //     cout<<endl;
    // } 
    
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

    //WAP to print marks of top 3 students
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

    // int n;
    // cin>>n;
	// int nlist[n];
	// int x, count1=0;
	// for (int i=0; i<n; i++){
	//     cin>>x;
	//     nlist[i]=x;
	//     if (x==1){
	//         count1++;
	//     }
	// }
	// int remlist[n-1];
	// for (int i=0, k=0; i<n && k<(n-1); i++){
	//     if (i!=count1){
	//         remlist[k]=nlist[i];
	//         k++;
	//     }
	// }
	// for (int j=0; j<(n-1); j++){
	//     cout<<remlist[j]<<" ";
	// }

    


     return 0;    
}
