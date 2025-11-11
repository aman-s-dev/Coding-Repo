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
  for (int i=1; i<=4; i++){
    int p1=0;
    int p2=0;
    if (i==4){
      for (int q=7;q>0;q--){
        cout<<"*";
      }
      cout<<endl;
    }
    else{
      for (int p=1;p<=7;p++){
        if (p+i==5 || p-i==3){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
  }

  return 0;
}

