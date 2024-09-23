#include<iostream>
using namespace std;

void bubbleSort(int arr[], int row, int col, int n) {

    if(row == n) return;

    if(col < n - row - 1) {
        if(arr[col] > arr[col + 1]) {
            int temp = arr[col];
            arr[col] = arr[col + 1];
            arr[col + 1] = temp;
        }
        bubbleSort(arr, row, col + 1, n);
    } else {
        bubbleSort(arr, row + 1, 0, n);
    }
}

int main() {

    int arr[] = {5, 4, 3, 2, 1, 43, -6-4, -100+23, 0};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, 0, 0, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}