#include<bits/stdc++.h>
using namespace std;

// comparison based sorting: bubble, selection, insertion
// non comparison based sorting: counting, radix, bucket

void bubble_sort(vector<int> arr){ // Worst case time complexity(if array was in reversed order): O(n^2).......best case: O(n)
    n=arr.size();
    bool swapped=false;
    for (int i=0; i<n; i++){
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
    for(int i=0; i<n; i++){
        min=arr[i];
        for(int j=i+1; j<n; i++){
            if(arr[j]<min){
                min=arr[j];
            }
        }
        swap(arr[min], arr[i]);
    } 
}

void insertion_sort(vector<int> arr){
    n=arr.size();
    int key;
    for (int i=1; i<n; i++){
        key = arr[i];
        j=i-1;
        while (j<=0 && arr[j]>arr[i]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int merged[n+m];
    int i=0, j=0, k=0;
    while (i<m && j<n){
        if (nums1[i]=<nums2[j]){
            merged[k]=nums1[i];
            k++;
            i++;
        }
        else if (num1[i]>num2[j]){
            merged[k]=nums2[j];
            k++;
            j++;
        }
        if (i<m){
            for (int a=i; a<m; a++){
                merged[k]=nums1[i];
                k++;
            }
        }
        else if (j<n){
            for (int a=j; a<n; a++){
                merged[k]=nums2[j];
                k++;
            }
        }
    }
}

vector<int> countsort(vector<int>& arr) {
    int n = arr.size();

    // find the maximum element
    int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize cntArr array
    vector<int> cntArr(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        cntArr[arr[i]]++;

    // compute prefix sum/cummulative frequecies
    for (int i = 1; i <= maxval; i++)
        cntArr[i] += cntArr[i - 1];

    // build output array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[cntArr[arr[i]] - 1] = arr[i];
        cntArr[arr[i]]--;
    }

    return ans;
}

int main() {
    vector<int> arr = {2,5,3,0,2,3,0,3};
    vector<int> ans = countsort(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}bb