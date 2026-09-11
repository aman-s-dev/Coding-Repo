#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
int reverseNum(int n, int accumulator = 0){
    if (n==0) return accumulator;
    return reverseNum(n/10, accumulator*10 + n%10);
    
}

int arraySum(vector<int> arr, int i=0, int sum=0){
    if (i==arr.size()) return sum;
    return arraySum(arr, i+1, sum+arr[i]);
}

bool isPalindrome(string s, int i=0){
    if (i>=s.size()-1-i) return true;
    if (s[i]!=s[s.length()-1-i]) return false;
    return isPalindrome(s, i+1);
}


int main(){
    cout<<reverseNum(1234)<<endl;
    vector<int> arr = {1,2,3,4};
    cout<<arraySum(arr)<<endl;
    cout<<isPalindrome("12344321")<<endl;
}
