#include<bits/stdc++.h>
using namespace std;

// Linear Search / sequential search
int linear_search(int arr[],int n, int key){ // time complexity = O(n)
    bool flag=false;
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
            flag=true;
            break;
        }
    }
    if (flag==false){
        return -1;
    }
}
int binary_search(int list[], int n, int key){ // time complexity = O(log n)
    int low, upp;
    low=0;
    upp=n-1;
    int mid;
    bool flag=false;
    while(low<=upp){
        mid = low + (upp - low)/2;
        if (list[mid]==key){
            flag=true;
            break;
        }
        else if (list[mid]<key){
            low=mid+1;
        }
        else{
            upp=mid-1;
        }
    }
    if(flag==false){return -1;}
    else{return mid;}

}

int main(){
    int n=3;
    int arr[n];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    int key=4;
    int index = binary_search(arr,n,key);
    cout<<index;
}

