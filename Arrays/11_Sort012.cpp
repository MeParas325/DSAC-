#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 0, 1, 1, 2, 0, 0, 2, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    int zeroCount = 0, oneCount = 0, twoCount = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) zeroCount++;
        else if(arr[i] == 1) oneCount++;
        else twoCount++;

    }

    int i = 0;

    while(i < zeroCount) arr[i++] = 0;
    int startOne = i;

    while(i < startOne + oneCount) arr[i++] = 1;
    int startTwo = i;

    while(i < startTwo + twoCount) arr[i++] = 2;

    for(int j = 0; j < n; j++) cout << arr[j] << " ";


}