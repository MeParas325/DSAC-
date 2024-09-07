#include<iostream>
using namespace std;

void reverseArr(int arr[], int index, int length) {

    if(index > length / 2) return;

    int temp = arr[index];
    arr[index] = arr[length - 1 - index];
    arr[length - 1 - index] = temp;

    reverseArr(arr, index + 1, length);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;

    reverseArr(arr, 0, length);

    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}