#include<bits/stdc++.h>
using namespace std;

void printSubSequence(int index, int arr[], vector<int> subSequence, int k, int n, int sum, bool &isSubArrayFound) {

    if(index == n) {

        if(sum == k) {
            for(auto it: subSequence) cout << it << " ";
            isSubArrayFound = true;
        }
        return;

    }

    if(!isSubArrayFound) {
        subSequence.push_back(arr[index]);
        printSubSequence(index + 1, arr, subSequence, k, n, sum + arr[index], isSubArrayFound);
        subSequence.pop_back(); 
    }

    if(!isSubArrayFound) {
        printSubSequence(index + 1, arr, subSequence, k, n, sum, isSubArrayFound);

    }
}



int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    int k = 2, n = sizeof(arr) / sizeof(int);
    bool isSubArrayFound = false;

    printSubSequence(0, arr, subSequence, k, n, 0, isSubArrayFound);
}