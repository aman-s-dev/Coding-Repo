#include <iostream>
#include <vector>
using namespace std;

int main(){
    // //Number Palindrome check
    int n;
    vector<int> num;
    cout<<"Enter the number digit by digit (ENTER) and to end the input, enter -1 : "<<endl;
    do{
        cin>>n;
        num.push_back(n);
    }
    while (n>0);
    num.pop_back();
    // for (int i=0; i<num.size(); i++){
    //     cout<<num[i];
    // }
    int size=num.size();
    int x=0;
     for (int i=size-1; i>=0; i--){
        x*=10;
        x+=num[i];
    }
    int it=0;
    for (int k=0; k<size/2; k++){
        if (num[k]==num[size-1-k]){
            it++;
        }
        else{
            cout<<x<<" is Not a Palindrome"<<endl;
            break;
        }
    }
    if (it>=(size/2)){
        cout<<x<<" is a Palindrome"<<endl;
    }
    return 0;
}