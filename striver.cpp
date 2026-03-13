#include <iostream>
using namespace std;
 int main(){
    // printing factors
  int num;
  cin>>num;
  set<int> facs;
  for (int i=1; i*i<=num; i++){
    if (num%i==0){
      facs.emplace(i);
      if (num/i!=i){
        facs.emplace(num/i);
      }
    }
  }
  for (auto it : facs){
    cout<<it<<" ";
  }

 }