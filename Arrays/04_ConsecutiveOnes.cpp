#include<bits/stdc++.h>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& arr) {

        int i = 0;
        int j = 0;

        int n = arr.size();

        int count = 0;
        int prevCount = 0;

        while(j < n) {

            if(arr[i] == arr[j] == 1) {
                j++;
                count++;
                cout << "Inside if";
            }
            else {
                prevCount = max(count, prevCount);
                count = 0;
                j++;
                i = j;
            }
        }

        return prevCount > count ? prevCount : count;
 }

int main() {

    vector<int> nums = {0};

    cout << findMaxConsecutiveOnes(nums);
}