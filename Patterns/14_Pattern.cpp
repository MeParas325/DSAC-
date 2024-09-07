#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool startZero = false;

    for(int i = 1; i <= n; i++) {

        int startNumber = 1;

        if(i % 2 == 0) startZero = true;


        for(int j = 1; j <= i; j++) {

            if(startZero) {
                if(j % 2 != 0) {
                    cout << "0 ";
                } else {
                    cout << "1 ";
                }
            } else {
                if(j % 2 == 0) {
                    cout << "0 ";
                } else {
                    cout << "1 ";
                }
            }

        }
        cout << endl;
        startZero = false;
    }
}