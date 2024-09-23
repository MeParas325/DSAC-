#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int k)
{

    int size = arr.size();
    k = k % size;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < k / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }

    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int j = 0;
    for (int i = k; i < (size + k) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - j];
        arr[size - 1 - j] = temp;
        j++;
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    rotate(arr, 3);

    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    
}