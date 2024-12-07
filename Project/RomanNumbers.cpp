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
                    num = num + (romanNumbers['V'] - romanNumbers['I']);
                }
                if (s[i] == 'I' && s[i + 1] == 'X') {
                    num = num + (romanNumbers['X'] - romanNumbers['I']);
                }

                if (s[i] == 'X' && s[i + 1] == 'L') {
                    num = num + (romanNumbers['L'] - romanNumbers['X']);
                }
                if (s[i] == 'X' && s[i + 1] == 'C') {
                    num = num + (romanNumbers['C'] - romanNumbers['X']);
                }

                if (s[i] == 'C' && s[i + 1] == 'D') {
                    num = num + (romanNumbers['D'] - romanNumbers['C']);
                }
                if (s[i] == 'C' && s[i + 1] == 'M') {
                    num = num + (romanNumbers['M'] - romanNumbers['C']);
                }
                bool isTriple = false;;
                if (s[i] == s[i + 1]) {
                    num = num + romanNumbers[s[i]];
                    
                    if (s[i + 1] == s[i + 2]) { 
                        num += romanNumbers[s[i]]; 
                        isTriple = true;
                        break; 
                    }
                    
                }
                
                if (!isTriple) { num = num + romanNumbers[s[i]]; }
            }
        }
    }
    return num;
}

//I can be placed before V(5) and X(10) to make 4 and 9.
//X can be placed before L(50) and C(100) to make 40 and 90.
//C can be placed before D(500) and M(1000) to make 400 and 900.
//Given a roman numeral, convert it to an integer.
