#include<bits/stdc++.h>
using namespace std;

void findCombination(int index, int arr[], int target, set<vector<int>> &ans, vector<int> v, int n) {

    if(index == n) {
        if(target == 0) {
            ans.insert(v);
        }
        return;
    }

    if(arr[index] <= target) {
        v.push_back(arr[index]);
        findCombination(index + 1, arr, target - arr[index], ans, v, n);
        v.pop_back();
    }
    findCombination(index + 1, arr, target, ans, v, n);



}


void combinationSum(int arr[], int target, int n) {

    set<vector<int>> ans;
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