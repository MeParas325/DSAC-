#include<bits/stdc++.h>
using namespace std;

int getCount(int index, int arr[], vector<int> subSequence, int k, int n, int sum) {

    if(index == n) {

        if(sum == k) return 1;
        return 0;

    }

    int count = 0;

    subSequence.push_back(arr[index]);
    count += getCount(index + 1, arr, subSequence, k, n, sum + arr[index]);
    subSequence.pop_back();
    count += getCount(index + 1, arr, subSequence, k, n, sum);

    return count;

    
}



int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    int k = 4, n = sizeof(arr) / sizeof(int);

    cout << getCount(0, arr, subSequence, k, n, 0);
}