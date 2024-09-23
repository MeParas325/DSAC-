#include<iostream>
using namespace std;

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high) {

    if(low >= high) return;

    int pivotIndex = partition(arr, low, high);

    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

int partition(int arr[], int low, int high) {

    int pivot = arr[low];
    
    int i = low + 1;
    int j = high;

    while(i <= j) {

        while(i <= j && arr[i] <= pivot) i++;
        while(i <= j && arr[j] > pivot) j--;

        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    arr[low] = arr[j];
    arr[j] = pivot;

    return j;
}

int main() {

    int arr[] = {6, 6, 5, 4, 4, 3, 2, 1, 1};
    int length = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, length - 1);

    for(int i = 0; i < length; i++) cout << arr[i] << " ";
}