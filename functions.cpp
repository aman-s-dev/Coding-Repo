#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
// void ispalindrome(){
//     int n;
//     vector<int> num;
//     cout<<"Enter the number digit by digit (ENTER) and to end the input, enter -1 : "<<endl;
//     do{
//         cin>>n;
//         num.push_back(n);
//     }
//     while (n>0);
//     num.pop_back();
//     // for (int i=0; i<num.size(); i++){
//     //     cout<<num[i];
//     // }
//     int size=num.size();
//     int x=0;
//      for (int i=size-1; i>=0; i--){
//         x*=10;
//         x+=num[i];
//     }
//     int it=0;
//     for (int k=0; k<size/2; k++){
//         if (num[k]==num[size-1-k]){
//             it++;
//         }
//         else{
//             cout<<x<<" is Not a Palindrome"<<endl;
//             break;
//         }
//     }
//     if (it>=(size/2)){
//         cout<<x<<" is a Palindrome"<<endl;
//     }
// }
// // int main(){
// //     ispalindrome();
// // }

// int power(int b,int ex){  // function for Exponent on a base
//     int pro=b;
//     for (int i=1; i<ex; i++){
//         pro*=b;
//     }
//     return pro;
// }
// int main(){  //function call
//     int x,y;
//     cout<<"base = ";
//     cin>>x;
//     cout<<"exponent = ";
//     cin>>y;
//     int product=power(x,y);
//     cout<<product<<endl;
// }

// //function for 2 number swaping
// int swap(int& a, int& b){
//     int temp = a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int x, y;
//     cout<<"enter 2 numbers: "<<endl;
//     cin>>x>>y;
//     swap(x,y);
//     cout<<"After swapping x = "<<x<<" y = "<<y;
//     return 0;
// }

// int prime(int n){
//     vector<int> primes;
//     bool yn=false;
//     for (int i=1; i<=n; i++){
//         if (i%2==0 || i%3==0 || i%10==5){
//             continue;
//         }
//         else{
//             for (int j=1; j<primes[primes.size()-1]; j++){
//                 if (i%j!=0){
//                     continue;
//                 }
//                 else{
//                     yn=true;
//                     break;
//                 }
//             }
//             if (yn==false){
//                 primes.push_back(i);
//             }
//         }
//     }
//     int i=0;
//     while (i<primes.size()){
//         cout<<primes[i]<<" ";
//         i++;
//     }
// }
// int main(){
//     int ln;
//     cout<<"Enter the number upto which primes you need : ";
//     cin>>ln;
//     prime(ln);
// }

// Minor matrix
int minor(float A[int n][int n], int r, int c){
    vector<float> Mlist;
    int M[n-1][n-1];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==r || j==c){
                continue;
            }else{
                Mlist.push_back(A[i][j]);
            }
        }
    }
    int count=0;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            M[i][j]=Mlist[count];
            count++;
        }
    }
    return M;
}


// Determinant of matrix of order using recursion
    int determinant(float A[int n][int n]){
        if (n==2){
            float p = A[1][1]*A[2][2] + A[2][1]*A[1][2]; 
            return p;
        }else{
            float sum=0;
            for (int i=1; i<=n; i++){

                sum+=(pow(-1,i+1))*(A[i-1][0])*(determinant(minor))
            }
        }
    }

    int p,q;
    cin>>p>>q;
    int A[p][q];
    for (int i=1; i<=p; i++){
        for (int j=1; j<=q; j++){
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    


