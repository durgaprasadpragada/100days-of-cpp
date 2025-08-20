#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str; // we use cin here (palindrome usually single word)

    int n = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        { // compare front and back
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << str << " is a Palindrome\n";
    else
        cout << str << " is NOT a Palindrome\n";

    return 0;
}
/*
str.length() → get total size.

Loop only till n/2 (middle) → no need to check twice.

Compare str[i] with str[n-1-i].

Example: "madam"

m == m, a == a, middle d doesn’t need checking.

If all pairs match → Palindrome.
*/