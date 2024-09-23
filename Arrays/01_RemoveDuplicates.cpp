#include<iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {

    cout << "Inside remove duplicates" << endl;
    int i = 0;
    int j = 1;

    while(j < n) {
        cout << "while loop" << endl;
        while(j < n && arr[i] == arr[j]) j++;

        i++;
        arr[i] = arr[j];
    }
    cout << i << endl;
    for(i = 0; i < n; i++) cout << arr[i] << " ";

}

int main() {

    int arr[] = {1, 1};
    int n = sizeof(arr) / sizeof(int);

    removeDuplicates(arr, n);
}