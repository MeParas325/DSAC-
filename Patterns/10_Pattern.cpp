#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < 2*n - 1; i++) {

        if(i < n) {

            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            for(int j = 0; j < 2*i + 1; j++) {
                cout << "*";
            }

            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
        } else {
            for(int j = n; j <= i; j++) {
                cout << " ";
            }
            for(int j = n; j < 2*n - 2*(i - n) + 2; j++) {
                cout << "*";
            }
            for(int j = n; j < i; j++) {
                cout << " ";
            }
        }
        cout << endl;
    }
}