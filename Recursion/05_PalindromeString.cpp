#include<iostream>
using namespace std;

bool isPalindrome(string str, int index) {

    if(index > str.length() / 2) return true;

    if(str[index] == str[str.length() - index - 1]) {
        return isPalindrome(str, index + 1);
    } else {
        return false;
    }
}

int main() {

    string str;
    cin >> str;

    if(isPalindrome(str, 0)) cout << "String is Palindrome";
    else cout << "String is not Palindrome";
}