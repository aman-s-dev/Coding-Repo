#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    vector<int> temp;
    int i = left;
    int j = mid+1;
    while (i<=mid && j<=right){
        if (arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else if (arr[i] > arr[j]) {
            temp.push_back(arr[j]);
            j++;
        }

    }
    while (i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=right){
        temp.push_back(arr[j]);
        j++;
    }
    for (int k=0; k<temp.size(); k++){
        arr[left+k] = temp[k];
    }

}
void mergeSort(vector<int>& arr, int left, int right){
    if (left==right) return;
    int mid = left + (right-left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
    return;
}


int main(){
    vector<int> us = {38, 27, 4, 10, 45};
    mergeSort(us, 0, 4);
    for (int i=0; i<5; i++){
        cout<<us[i]<<" ";
    }
}