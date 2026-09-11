#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int index){
    if(index==n) return -1;
    if (arr[index] == key) return index;
    return linearSearch(arr, n, key, index+1);
}

int binarySearch(int arr[], int low, int high, int key){
    if (low>high) return -1;
    int mid = low + (high-low)/2;
    if (arr[mid] == key) return mid;
    if (key < arr[mid]) return binarySearch(arr, low, mid-1, key);
    return binarySearch(arr, mid+1, high, key);
}



