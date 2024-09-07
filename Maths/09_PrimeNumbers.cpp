#include<bits/stdc++.h>
using namespace std;

// void isPrime(int num);

bool isPrime(int num) {

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return false;
    }

    return true;
}

int main() {

    int n;
    cin >> n;

    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            cout << i << endl;
        }
    }
}