#include<iostream>
using namespace std;


void display(int arr[], int size) {

    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}


int main() {
     
     int arr[] = {5, 4, 3, 2, 1};
     int size = sizeof(arr) / sizeof(int);

     for(int i = 1; i < size; i++) {
        int swapElementIndex = i;
        for(int j = i - 1; j >= 0; j--) {

            if(arr[swapElementIndex] < arr[j]) {
                int temp = arr[swapElementIndex];
                arr[swapElementIndex] = arr[j];
                arr[j] = temp;
                swapElementIndex = j;
            }

        }
     }

     display(arr, size);
}