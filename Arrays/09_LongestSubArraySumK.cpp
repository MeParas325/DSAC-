#include<iostream>
using namespace std;

int largestSumK(int arr[], int k) {

    int i = 0, j = 0, sum = 0, count = 0;

    while(i < n) {

            while(j < n && sum <= k) {
                if(sum == k) count++;
                sum += nums[j];
                if(sum > k) break;
                j++;
            }
            sum -= nums[i++];
        }
}

int main() {

    int arr[] = {1, 1, 1};
    int k = 2;

    cout << largestSumK(arr, k);
}