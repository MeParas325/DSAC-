#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int middle = (2 * i + 1) / 2;
        char ch = 'A';
        for(int j = 1; j <= 2 * i + 1; j++) {
            if(j <= middle) {
                cout << ch++;
            } else {
                cout << ch--;
            }
        }

        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}