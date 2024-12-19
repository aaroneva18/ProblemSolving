#include <iostream>
#include <vector>
#include "TwoSum.h"
#include "Palindrome_Number.h"
#include "RomanNumbers.h"
#include "RemoveNumbers.h"

using std::cout, std::vector;

void printVector(vector<int>& nums);

int main()
{
    std::cout << "Hello World!\n";
    /*RomanNumbers romanNumbers;
    
    cout << romanNumbers.romanToInt("XXX") << "\n"*/;

    RemoveNumbers RM;

    vector<int> repetidos = { 1,1,2,2,3,3 };
    vector<int> nuevos = RM.removeNumbers(repetidos);
    printVector(nuevos);


}


void printVector(vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ", ";
    }
    cout << "]";
}
