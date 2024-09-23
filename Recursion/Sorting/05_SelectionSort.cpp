#include<iostream>
using namespace std;

void selectionSort(int arr[], int row, int col, int maxEleIndex) {

    if(row == 0) return;

    if(col < row) {
        if(arr[col] < arr[col + 1] && arr[maxEleIndex] < arr[col + 1]) maxEleIndex = col + 1;
        selectionSort(arr, row, col + 1, maxEleIndex);
    } else {
        int temp = arr[maxEleIndex];
        arr[maxEleIndex] = arr[col];
        arr[col] = temp;
        selectionSort(arr, row - 1, 0, 0);
    }
}

int main() {

    int arr[] = {5, 4, 3, 2, 1, 43, 0, 235, -66};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n - 1, 0, 0);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}