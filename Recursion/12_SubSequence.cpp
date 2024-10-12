#include<bits/stdc++.h>
using namespace std;

bool printSubSequence(int index, int arr[], vector<int> subSequence, int k, int n, int sum) {

    if(index == n) {

        if(sum == k) {
            for(auto it: subSequence) cout << it << " ";
            return true;
        }
        return false;

    }

    subSequence.push_back(arr[index]);
    if(printSubSequence(index + 1, arr, subSequence, k, n, sum + arr[index]) == false) {
        subSequence.pop_back(); 
        return printSubSequence(index + 1, arr, subSequence, k, n, sum);
    } else {
        return true;
    }
}



int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    int k = 4, n = sizeof(arr) / sizeof(int);

    printSubSequence(0, arr, subSequence, k, n, 0);
}