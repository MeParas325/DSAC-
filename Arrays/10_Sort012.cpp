#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {

    int newArr[(mid - low) + (high - mid) + 1];
    int k = 0;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {

        if(arr[left] > arr[right]) newArr[k] = arr[right++];
        else newArr[k] = arr[left++];

        k++;
    }

    while(left <= mid) newArr[k++] = arr[left++];
    while(right <= high) newArr[k++] = arr[right++];

    for(k = low; k <= high; k++) arr[k] = newArr[k - low]; 
}

void mergeSort(int arr[], int low, int high) {

    if(low >= high) return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}



int main() {

    int arr[] = {1, 1, 1, 0, 1, 0, 2, 1, 0};

    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}