#include<iostream>
using namespace std;

int printNum(int n) {

    if(n == 0) return n;

    return n + printNum(n - 1);
}

int main() {

    int n;
    cin >> n;

    cout << printNum(n);
}