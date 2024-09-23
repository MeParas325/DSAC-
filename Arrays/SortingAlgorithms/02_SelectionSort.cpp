#include<iostream>
using namespace std;

void display(int arr[], int size) {

    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {

    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++) {
        int minIndex = i;
        for(int j = i; j < size; j++) {
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    display(arr, size);
}