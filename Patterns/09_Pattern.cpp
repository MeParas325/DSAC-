#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

            for(int k = n - i - 1; k < n - 1; k++) {
                cout << " ";
            }
    
            for(int k = 0; k < ((2*n) - (2*i)) - 1; k++) {
                cout << "*";
            }
    
            for(int k = n - i - 1; k < n - 1; k++) {
                cout << " ";
            }
    
            cout << endl;
        }
}