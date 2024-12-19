#include "Palindrome_Number.h"

bool Palindrome_Number::isPalindrome(int x)
{
    if (x < 0) { return false; }

    long temp = x;
    long reversed = 0;

    while (x) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return temp == reversed;
}
