#include<bits/stdc++.h>
using namespace std;

void printSubSequence(int index, int arr[], vector<int> subSequence, int k, int n) {

    if(index == n) {
        int sum = 0;
        for(auto it: subSequence) sum += it;

        if(sum == k) for(auto it: subSequence) cout << it << " ";
        cout << endl;
        return;
    }

    subSequence.push_back(arr[index]);
    printSubSequence(index + 1, arr, subSequence, k, n);
    subSequence.pop_back();
    printSubSequence(index + 1, arr, subSequence, k, n);    

}

int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    int k = 3, n = sizeof(arr) / sizeof(int);
    printSubSequence(0, arr, subSequence, k, n);


}