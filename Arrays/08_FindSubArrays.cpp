#include<iostream>
using namespace std;

void findMaxSumSubarray(int arr[], int k) {

    int n = 7;
    int ans = 0;

    for(int i = 0; i < n; i++) {

        int subArrayLength = 0;
        int sum = 0;
        for(int j = i; j < n; j++) {

            sum += arr[j];
            subArrayLength++;
            if(sum == k) {
                 ans = max(subArrayLength, ans);
                 subArrayLength = sum = 0;
            }

        }

        sum = subArrayLength = 0;
    }

    cout << "Subarray length is: " << ans;
}

int main() {

    int arr[] = {6, 3, 7, 8, 5 ,3, 1};

    findMaxSumSubarray(arr, 16);
}