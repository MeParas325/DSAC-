#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    int i = 0;
    int j = 0;

    while (j < nums.size())
    {
        if (nums[j] != 0)
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }

    while (i < nums.size())
        nums[i++] = 0;
}

int main() {

    vector<int> v = {0, 1, 0, 3, 12};

    moveZeroes(v);

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}