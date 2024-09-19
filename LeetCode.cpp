#include <iostream>
#include <vector>
#include "TwoSum.h"
#include "Palindrome_Number.h"

using std::cout, std::vector;

void printVector(vector<int>& nums);

int main()
{
    std::cout << "Hello World!\n";

    vector<int> nums {5,8,9,4,1};
    vector<int> result;

    Palindrome_Number pn;

    TwoSum ts;

    result = ts.twoSum(nums, 17);

    printVector(result);
}


void printVector(vector<int> &nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ", ";
    }
    cout << "]";
}
