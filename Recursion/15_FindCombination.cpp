#include<bits/stdc++.h>
using namespace std;

void findCombination(int index, int arr[], int target, vector<vector<int>> &ans, vector<int> v, int n) {

    if(index == n) {
        if(target == 0) {
            ans.push_back(v);
        }
        return;
    }

    if(arr[index] <= target) {
        v.push_back(arr[index]);
        findCombination(index, arr, target - arr[index], ans, v, n);
        v.pop_back();
    }

    findCombination(index + 1, arr, target, ans, v, n);


}


vector<vector<int>> combinationSum(int arr[], int target, int n) {

    vector<vector<int>> ans;
    vector<int> v;
    findCombination(0, arr, target, ans, v, n);

    for (const auto& row : ans) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout <<endl;
    }

    return ans;

}

int main() {

    int arr[] = {2, 3, 6, 7};
    int target = 7, n = sizeof(arr) / sizeof(int);

    vector<vector<int>> ans = combinationSum(arr, target, n);
}