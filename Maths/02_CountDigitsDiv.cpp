#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int temp = n;
    int count = 0;

    while(temp != 0) {
        int rem = temp % 10;
        if(rem != 0 && n % rem == 0) count++;
        temp /= 10;

    }

    cout << "Number of digits which divide the number n are: " << count;
}