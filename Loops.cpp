#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
  // for (int i = 1;i<=10;i++){   /*using FOR loop*/
  //   cout<<i<<"  ";
  // }
  // cout<<endl;

  // int n=0;  /*WHILE loop*/
  // while (n<=10) 
  // {
  //   n++;
  //   cout<<n<<"  ";
  // }
  // cout<<endl;
  
  // int m=1;
  // do
  // {
  //   cout<<m<<"  ";
  //   m++;
  // } while (m<=10);
  // cout<<endl;

  // vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
  // for (int&a : arr)
  // {
  //   a++;
  //   cout<<a<<"  ";
  // }
  // cout<<endl;

  // for (int i = 1; i < 6; i++)
  // {
  //   for (int j = 1; j < 4 ; j++)
  //   {
  //     double m = pow(i,j);
  //     cout<<"i = "<<i<<"; o = "<<m<<endl;
  //   }
  // }
  // for (int i=1;i<=5;i++){
  //   for (int j=1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // return 0;
  // for (int i=1;i<=5;i++){
  //   for (int j=i;j>0;j--){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // for(int a=1; a<=4;a++){
  //   for(int b=1; b<=7; b++){
  //     if(a+b==5 || b-a==3 || a==4){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  //}
  // for (int i=1; i<=4; i++){
  //   int p1=0;
  //   int p2=0;
  //   if (i==4){
  //     for (int q=7;q>0;q--){
  //       cout<<"*";
  //     }
  //     cout<<endl;
  //   }
  //   else{
  //     for (int p=1;p<=7;p++){
  //       if (p+i==5 || p-i==3){
  //         cout<<"*";
  //       }
  //       else{
  //         cout<<" ";
  //       }
  //     }
  //     cout<<endl;
  //   }
  // }
  
  // class test 1, question 1
  // for (int i=1; i<=6; i++){
  //   for (int j=i+1; j<=7; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // // Class test 1, question 2 : Fibonacci sequence
  // int n1=0,n2=1,n=0,count=0;
  // cout<<n1<<" "<<n2<<" ";
  // while (n<100){
  //   n=n2+n1;
  //   n1=n2;
  //   n2=n;
  //   if (n>100){
  //     break;
  //   }
  //   cout<<n<<" ";
  //   count++;
  // }
  // cout<<endl<<"count = "<<count<<endl;
  // cout<<"Last term = "<<n1<<endl;

  // //class test 1, question 3
  // for (int i=1; i<=4; i++){
  //   for (int j=4-i; j>0; j--){
  //     cout<<" ";
  //   }
  //   for (int j=i; j>=1; j--){
  //     cout<<j;
  //   }
  //   if (i>1){
  //     for (int m=2; m<=i; m++){
  //       cout<<m;
  //     }
  //   }
  //   cout<<endl;
  // }

  // //Pattern
  // for (int i=1; i<=5; i++){
  //   for (int j=5-i; j>0; j--){
  //     cout<<" ";
  //   }
  //   for (int j=1; j<=i; j++){
  //     cout<<j;
  //   }
  //   if (i>1){
  //     for (int m=i-1; m>0; m--){
  //       cout<<m;
  //     }
  //   }
  //   cout<<endl;
  // }

  // Pattern : difficult
  // int max;
  // cout<<"maximum number of stars in a line: ";
  // cin>>max;
  // int maxl=2*max+1;
  // int lmax= 2*(2*maxl-1)-1;
  // for (int i=1; i<=lmax; i++){
  //   if (i%2==1){
  //     for (int j=1; j<= (-0.5)*(abs(i-maxl))+max; j++){
  //       cout<<"* ";
  //     }
  //   }else if (i%2==0){
  //     for (int j=1; j<= (-0.5)*(abs(i-maxl))+(maxl/2); j++){
  //       cout<<" *";
  //     }
  //   }
  //   cout<<"\n";
  // }
  
  // Butterfly pattern
  // int n;
  // cout<<"n = ";
  // cin>>n;
  // int stars=0;
  // int spaces=2*n-1;
  // for (int i=1; i<=2*n-1; i++){
  //   if(i<=n){
  //     spaces-=2;
  //     stars++;
  //   }
  //   else{
  //     spaces+=2;
  //     stars--;
  //   }
  //   for (int j=1; j<=stars; j++){
  //     cout<<"*";
  //   }
  //   for (int j=1; j<=spaces; j++){
  //     cout<<" ";
  //   }
  //   for (int j=1; j<=stars; j++){
  //     if (j!=n){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<"\n";
  // }

  // pascal triangle
  // cout<<c;
  // c=c*(row-i)/i;
  
  // for (int i=0; i<30; i++){
  //   for (int j=0; j<i; j++){
  //     if((i+j)%2==0){
  //       cout<<1;
  //     }else{ cout<<0; }
  //   }
  //   cout<<endl;
  // }
  // for (int i=0; i<20; i++){
  //   for (char j='A'; j<='A'+i; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }
  // int n=1;
  // for (int i=1; i<=5; i++){
  //   for (int j=0; j<i; j++){
  //     cout<<n;
  //     n++;
  //   }
  //   cout<<"\n";
  // }

  // valid phone number
  int n,x,tb;
	cin>>n>>x;
	tb=n*x;
	if(tb>=10000 && tb<=99999){
	    cout<<"yes";
	}else{
	    cout<<"no";
	}
  
  return 0;
}