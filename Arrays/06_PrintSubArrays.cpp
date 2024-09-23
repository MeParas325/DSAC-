#include<iostream>
using namespace std;

void printSubarrays(int arr[]) {

    int n = 7;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << "[ ";
            for(int k = i; k <= j ; k++) {
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {

    int arr[] = {6, 3, 7, 8, 5 ,3, 1};

    printSubarrays(arr);
}