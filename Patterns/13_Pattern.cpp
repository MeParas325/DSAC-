#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= 2 * n; i++) {

        if(i <= n) {

            for(int j = 1; j <= i; j++) {

                cout << "*";
            }
        } else {

            for(int j = n; j < 2*n - (i - n) + 1; j++) {
                
                cout << "*";

            }
        }
        cout << endl;
    }
}