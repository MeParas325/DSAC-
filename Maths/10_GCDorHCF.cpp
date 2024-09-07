#include<iostream>
using namespace std;

int main() {

    int n1, n2;

    cin >> n1 >> n2;

    while(n1 != 0 && n2 != 0) {

        if(n1 > n2) {
            n1 = n1 % n2;
        } else {
            int temp = n1;
            n1 = n2 % n1;
            n2 = temp;
        }
    }

    if(n1 != 0) cout << "GCD is: " << n1;
    else cout << "GCD is: " << n2;
}