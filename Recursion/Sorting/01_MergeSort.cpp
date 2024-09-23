#include<iostream>
using namespace std;


void merge(int arr[], int low, int mid, int high) {

    int temp[(mid - low) + (high - mid) + 1];
    int k = 0;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {

        if(arr[left] < arr[right]) {
            temp[k] = arr[left++];
        } else {
            temp[k] = arr[right++];
        }
        k++;
    }

    while(left <= mid) temp[k++] = arr[left++];
    while(right <= high) temp[k++] = arr[right++];

    for(int i = low; i <= high; i++) arr[i] = temp[i - low];
}

void mergeSort(int arr[], int low, int high) {

    if(low == high) return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

 
int main() {

    int arr[] = {5, 4, 3, 2, 1, -1, 556, -5};
    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}