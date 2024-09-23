#include<iostream>
using namespace std;

void findMaxSumSubarray(int arr[], int k) {

    int n = 7;
    int ans = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int subArrayLength = 0;
            sum = 0;
            for(int k = i; k <= j ; k++) {
                subArrayLength++;
                sum += arr[k];
            }
            if(sum == k) ans = max(subArrayLength, ans);
            sum = subArrayLength = 0;
            \

             
        }
    }

    cout << "Maximum subarray length with sum k is: " << ans;
}

int main() {

    int arr[] = {6, 3, 7, 8, 5 ,3, 1};

    findMaxSumSubarray(arr, 16);

}