#include<iostream>
using namespace std;

int printFib(int n) {

    if(n < 2) return n;

    return printFib(n - 1) + printFib(n - 2);
}

int main() {

    int n;
    cin >> n;

    cout << printFib(n);
}