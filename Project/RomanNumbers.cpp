#include "RomanNumbers.h"


int RomanNumbers::romanToInt(string s) {
    map<char, int> romanNumbers;
    int num = 0;
    romanNumbers['I'] = 1;
    romanNumbers['V'] = 5;
    romanNumbers['X'] = 10;
    romanNumbers['L'] = 50;
    romanNumbers['C'] = 100;
    romanNumbers['D'] = 500;
    romanNumbers['M'] = 1000;

    for (size_t i = 0; i < s.length(); i++) {
        for (auto it = romanNumbers.begin(); it != romanNumbers.end(); it++) {
            if (s[i] == it->first) {
                if (s[i] == 'I' && s[i + 1] == 'V') {

                }
            }
        }
    }
    return num;
}
