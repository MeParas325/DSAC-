#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int temp = n;
    int ans = 0;

    while(temp != 0) {
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp /= 10;
    }

    if(ans == n) cout << "True";
    else cout << "false";
}