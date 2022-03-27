#ifndef LOGICDESIGN_H_
#define LOGICDESIGN_H_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long double convertBinaryToDecimal(string number);
string convertDecimalToBinary(long double number);

long double convertOctalToDecimal(string number);
string convertDecimalToOctal(long double number);

long double convertHexDecimalToDecimal(string number);
string convertDecimalToHexDecimal(long double number);

string convertBinaryToOctal(string number);
string convertBinaryToHexDecimal(string number);

string convertOctalToBinary(string number);
string convertOctalToHexDecimal(string number);

string convertHexDecimalToBinary(string number);
string convertHexDecimalToOctal(string number);

string getFunctionFromTruthTable(int numberOfInputs, vector<int> &output);

#endif
