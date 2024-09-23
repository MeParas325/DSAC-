#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {2, 2, 1, 3, 2, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    map<int, int> map;

    for(int i = 0; i < n; i++) map[arr[i]]++;

    for(auto it: map) if(it.second > n / 2) cout << it.first;
    
}