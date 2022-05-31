#ifndef LOGICDESIGN_H_
#define LOGICDESIGN_H_
#include <iostream>
#include <string> 



double convertBinaryToDecimal(std::string number);
std::string convertDecimalToBinary(double number);

double convertOctalToDecimal(std::string number);
std::string convertDecimalToOctal(double number);

double convertHexDecimalToDecimal(std::string number);
std::string convertDecimalToHexDecimal(double number);

std::string convertBinaryToOctal(std::string number);
std::string convertBinaryToHexDecimal(std::string number);

std::string convertOctalToBinary(std::string number);
std::string convertOctalToHexDecimal(std::string number);

std::string convertHexDecimalToBinary(std::string number);
std::string convertHexDecimalToOctal(std::string number);

std::string getFunctionFromTruthTable(std::string output);
std::string getMaxTermFunctionFromTruthTable(std::string output);

bool check(std::string s);
std::string repNum(int pos, int n, std::string s); 
std::string replaceAsterisk(std::string s);
std::string replacePlus(std::string s);


#endif