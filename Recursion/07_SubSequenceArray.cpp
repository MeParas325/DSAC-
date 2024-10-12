#include<bits/stdc++.h>
using namespace std;

void printSubSequence(int index, vector<int> &subSequence, int arr[]) {

    if(index == 3) {

        for(auto it: subSequence) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    subSequence.push_back(arr[index]);
    printSubSequence(index + 1, subSequence, arr);
    
    subSequence.pop_back();
    printSubSequence(index + 1, subSequence, arr);

}

int main() {

    int arr[] = {1, 2, 1};
    vector<int> subSequence;

    printSubSequence(0, subSequence, arr);
}