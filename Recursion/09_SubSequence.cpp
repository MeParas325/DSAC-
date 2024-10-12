#include<bits/stdc++.h>
using namespace std;

void printSubSequence(int index, int arr[], vector<int> subSequence, int k, int n, int sum) {

    if(index == n) {
        if(sum == k) {
            for(auto it: subSequence) cout << it << " ";
            cout << endl;
        }
        return;
    }

    sum += arr[index];
    subSequence.push_back(arr[index]);
    printSubSequence(index + 1, arr, subSequence, k, n, sum);

    sum -= arr[index];
    subSequence.pop_back();
    printSubSequence(index + 1, arr, subSequence, k, n, sum);    

}

int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    int k = 4, n = sizeof(arr) / sizeof(int);
    printSubSequence(0, arr, subSequence, k, n, 0);


}