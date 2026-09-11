#include<iostream>
using namespace std;

int apown(int a, int n){
    if (n == 0) return 1;
    return a*apown(a, n-1);
}

int gcd(int a, int b){
    if (a==0) return b;
    if (b==0) return a;

    if (a==b) return a;
    
    if (a>b){
        if (a%b==0) return b;
        return gcd(a-b, b);
    }

    if (b%a==0) return a;
    return gcd(a, b-a);
}


int main(){
    cout<<apown(2,3)<<endl;
    cout<<gcd(12, 144);
}