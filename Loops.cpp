#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
  for (int i = 1;i<=10;i++){   /*using FOR loop*/
    cout<<i<<"  ";
  }
  cout<<endl;

  int n=0;  /*WHILE loop*/
  while (n<=10) 
  {
    n++;
    cout<<n<<"  ";
  }
  cout<<endl;
  
  int m=1;
  do
  {
    cout<<m<<"  ";
    m++;
  } while (m<=10);
  cout<<endl;

  vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
  for (int&a : arr)
  {
    a++;
    cout<<a<<"  ";
  }
  cout<<endl;

  for (int i = 1; i < 6; i++)
  {
    for (int j = 1; j<
      4 ; j++)
    {
      double m = pow(i,j);
      cout<<"i = "<<i<<"; o = "<<m<<endl;
    }
  }
  
  
  return 0;
}

