#include <iostream>
#include <vector>
using namespace std;
int main(){
    // // 4.1
    // float n1,n2;
    // char op;
    // cout<<"Enter the two operands: ";
    // cin>>n1>>n2;
    // cout<<"Enter the operator (1 for +, 2 for -, 3 for *, 4 for /): ";
    // cin>>op;
    // switch (op)
    // {
    // case '1':
    //     cout<<"Sum = "<<n1+n2;
    //     break;
    // case '2':
    //     cout<<"Difference = "<<n1-n2;
    //     break;
    // case '3':
    //     cout<<"Product = "<<n1*n2;
    //     break;
    // case '4':
    //     if (n2!=0){
    //         cout<<"Quotient = "<<n1/n2;
    //     }
    //     else{
    //         cout<<"Error! Division by ZERO";
    //     }
    //     break;
    // default:
    //     cout<<"Invalid input for operation"<<endl;
    //     break;
    // }

    // //4.2 Class test 1, question 2 : Fibonacci sequence
    // int a=0,b=1,n=0,count=0,N;
    // cout<<"Enter the limit : ";
    // cin>>N;
    // cout<<a<<" "<<b<<" ";
    // while (n<N){
    //     n=a+b;
    //     a=b;
    //     b=n;
    //     if (n>N){
    //     break;
    //     }
    //     cout<<n<<" ";
    //     count++;
    // }
    // cout<<endl<<"count = "<<count<<endl;
    // cout<<"Last term = "<<a<<endl;

    // // 4.3 Armstrong
    // int num;
    // vector<int> digits;
    // cout<<"Enter the number for armstrong check: ";
    // cin>>num;
    // int og=num, dig;
    // while (num>0){
    //     dig=num%10;
    //     digits.push_back(dig);
    //     num=num/10;
    // }
    // int N=digits.size();
    // int sum=0, prod=1, d;
    // for (int i=0; i<N; i++){
    //     d=digits[i];
    //     for (int j=1; j<=N; j++){
    //         prod*=d;
    //     }
    //     sum=sum+prod;
    //     prod=1;
    // }
    // if (sum==og){
    //     cout<<sum<<" is an armstrong number.";
    // }    
    // else{
    //     cout<<og<<" is NOT an armstrong number.";
    // }

    // //5.1
    // int numx;
    // vector<int> digitx;
    // cout<<"Enter the number for 'sum of digits' check: ";
    // cin>>numx;
    // int digx;
    // while (numx>0){
    //     digx=numx%10;
    //     digitx.push_back(digx);
    //     numx=numx/10;
    // }
    // int sumx=0;
    // do{
    //     while (sumx>0){
    //         digx=sumx%10;
    //         digitx.push_back(digx);
    //         sumx=sumx/10;
    //     }
    //     for (int i=0; i<digitx.size(); i++){
    //         sumx+=digitx[i];
    //     }
    //     digitx.clear();
    // }while (sumx>9);
    // cout<<sumx<<endl;

    // // 5.2
    // int N;
    // cout<<"Set the limit: ";
    // cin>>N;
    // vector<int> primes;
    // primes.push_back(2);
    // bool isp=true;
    // for (int i=3; i<=N; i++){
    //     for (int j=0; j<primes.size(); j++){
    //         if (i%primes[j]==0){
    //             isp=false;
    //             break;
    //         }
    //         else {
    //             isp=true;
    //         }
    //     }
    //     if (isp==true){
    //         primes.push_back(i);
    //     }
    // }
    // for (int i=0; i<primes.size();i++){
    //     cout<<primes[i]<<" ";
    // }
    

    // // 5.3
    // for (int i=1; i<=5; i++){
    //     for (int j=5-i; j>0; j--){
    //         cout<<" ";
    //     }
    //     for (int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     if (i>1){
    //         for (int m=i-1; m>0; m--){
    //             cout<<m;
    //         }
    //     }
    //     cout<<endl;
    // }

    // //6.1 WAP to print marks of top 3 students
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

    // // 6.2 Binary search
    // int n,low, upp;
    // cout<<"How many numbers ?: ";
    // cin>>n;
    // int list[n];
    // int ele;
    // cout<<"Enter the numbers one-by-one in ASCENDING order: "<<endl;
    // for (int i=0; i<n; i++){
    //     cin>>ele;
    //     list[i]=ele;
    // }
    // int x;
    // cout<<"Which number to find: ";
    // cin>>x;
    // low=0;
    // upp=n-1;
    // int mid;
    // bool prsns;
    // while(low<=upp){
    //     mid = low + (upp - low)/2;
    //     if (list[mid]==x){
    //         prsns=true;
    //         break;
    //     }
    //     else if (list[mid]<x){
    //         low=mid+1;
    //     }
    //     else{
    //         upp=mid-1;
    //     }
    //     prsns=false;
    // }
    // if(prsns==false){cout<<"Element not present";}
    // else{cout<<"Element is present at position "<<mid+1<<endl;}

    // //6.3
    int p,q,r;
    cout<<"Matrix Multiplication: AB\nEnter the order matrix A(p,q) : ";
    cin>>q>>p;
    int A[p][q];
    for (int i=1; i<=p; i++){
        for (int j=1; j<=q; j++){
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    cout<<"Enter the order matrix B(q,r) : ";
    cin>>q>>r;
    int B[q][r];
    for (int i=1; i<=q; i++){
        for (int j=1; j<=r; j++){
            cout<<"B["<<i<<"]["<<j<<"] = ";
            cin>>B[i][j];
        }
    }   
    int sump[q][r];
    int sum=0; 
    for (int t=1; t<=r; t++){
        for (int i=1; i<=p; i++){
            for(int s=1,j=1; s<=q && j<=q; s++, j++){
                sum+=((A[i][j])*(B[s][t]));
            }
            sump[i][t]=sum;
            sum=0;
        }
    }
    cout<<"Product AB = C :"<<endl;
    for (int i=1; i<=p; i++){
        for (int j=1; j<=r; j++){
            cout<<sump[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }