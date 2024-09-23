#include<iostream>
using namespace std;

void dutchFlag(int arr[]) {

    int low = 0, mid = 0, high = 9;

    while(mid <= high) {
        if(arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if(arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);

    }

}

int main() {

    int arr[] = {1, 1, 0, 0, 1, 2, 2, 0, 1, 2};
    dutchFlag(arr);
    for(int i = 0; i < 10; i++) cout << arr[i] << " ";
}