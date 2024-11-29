#include <iostream>
#include <vector>
#include "TwoSum.h"
#include "Palindrome_Number.h"
#include "RomanNumbers.h"

using std::cout, std::vector;

void printVector(vector<int>& nums);

int main()
{
    std::cout << "Hello World!\n";
    RomanNumbers romanNumbers;

    cout << romanNumbers.romanToInt("IV");
}


void printVector(vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ", ";
    }
    cout << "]";
}
