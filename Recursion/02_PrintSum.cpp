#include<iostream>
using namespace std;

int printSum(int n, int sum) {

    if(n == 0) return sum;

    return printSum(n - 1, sum + n);
}

int main() {

    int n;
    cin >> n;

    cout << printSum(n, 0);
}