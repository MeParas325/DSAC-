#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    n = abs(n);

    int temp = n;
    int ans = 0;

    while(temp != 0) {
        int rem = temp % 10;
        ans += rem * pow(10, (int)(log10(temp) + 1 - 1));
        temp /= 10;
    }

    cout << ans;
}