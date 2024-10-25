#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int first = 0;
    int last = str.length() - 1;

    while (first < last) {
        if (str[first] != str[last]) {
            return false;
        }
        first++;
        last--;
    }
    return true; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}