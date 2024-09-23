#include <iostream>
using namespace std;

void insertionSort(int arr[], int row, int col, int n)
{

    if (row == n)
        return;

    if (col > 0)
    {
        if (arr[col] < arr[col - 1])
        {
            int temp = arr[col];
            arr[col] = arr[col - 1];
            arr[col - 1] = temp;
        }
        insertionSort(arr, row, col - 1, n);
    }
    else insertionSort(arr, row + 1, row + 1, n);
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1, 43, 0};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, 0, 0, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}