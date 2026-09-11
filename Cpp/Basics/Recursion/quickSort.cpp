#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j=low; j<high; j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr, int low, int high){
    if (low>=high) return;
    int pindex = partition(arr, low, high);
    quickSort(arr, low, pindex-1);
    quickSort(arr, pindex+1, high);
    return;
}

int main(){
    vector<int> arr = {34, 21, 2, 6, 81, 101, 47, 901, 212, 234, 24, 11, 95, 68, 2};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    for (int i : arr){
        cout<<i<<" ";
    }
    return 0;
}
