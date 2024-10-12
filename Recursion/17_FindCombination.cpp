#include<bits/stdc++.h>
using namespace std;

void findCombination(int index, int arr[], int target, vector<vector<int>> &ans, vector<int> v, int n) {

    if(target == 0) {
        ans.push_back(v);
        return;
    }

    for(int i = index; i < n; i++) {

        if(i > index && arr[i] == arr[i - 1]) continue;
        if(arr[i] > target) break;

        v.push_back(arr[i]);
        findCombination(i + 1, arr, target - arr[i], ans, v, n);
        v.pop_back();

    }

}


void combinationSum(int arr[], int target, int n) {

    vector<vector<int>> ans;
    vector<int> v;
    findCombination(0, arr, target, ans, v, n);

    for (const auto& row : ans) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout <<endl;
    }

}

int main() {

    int arr[] = {1, 1, 1, 2, 2};
    int target = 4, n = sizeof(arr) / sizeof(int);

    combinationSum(arr, target, n);
}