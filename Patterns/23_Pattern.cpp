#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            char ch = 'A' + (n - i - 1);
            cout << ch;
        }
        cout << endl;
    }
}