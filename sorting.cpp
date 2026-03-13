#include<bits/stdc++.h>
using namespace std;

// comparison based sorting: bubble, selection, insertion
// non comparison based sorting: counting, radix, bucket

void bubble_sort(vector<int> arr){ // Worst case time complexity(if array was in reversed order): O(n^2).......best case: O(n)
    n=arr.size();
    swapped=false;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){      //if < then (j=i to j<n-1)
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (!swapped){
            break;
        }
    }
}

void selection_sort(vector<int> arr){ // worst case T.C. (reversed order): O(n^2).....best case: O(n)
    n=arr.size();
    int min;
    for(int i=0; i<n-1; i++){
        min=arr[i];
        for(int j=i+1; j<n-1; i++){
            if(arr[j]<min){
                min=arr[j];
            }
        }
        swap(arr[min], arr[i])
    } 
}