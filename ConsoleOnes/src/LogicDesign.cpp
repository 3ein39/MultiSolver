#include "LogicDesign.h"
#include <algorithm>
#include <cmath>
long long convertBinaryToDecimal(string number){
    long long decimal_number = 0;
    reverse(number.begin(),number.end());
    for(int i = 0;i<number.size();i++)
        decimal_number += pow(2,i)*(number[i]-'0');

    return decimal_number;
}

string convertDecimalToBinary(long long number){
    string binary_number = "";
    while(number){
        binary_number += (number%2+'0');
        number/=2;
    }
    reverse(binary_number.begin(),binary_number.end());
    return binary_number;
}

long long convertOctalToDecimal(string number){
    long long decimal_number = 0;
    reverse(number.begin(),number.end());
    for(int i = 0;i< number.size();i++)
        decimal_number += pow(8,i)*(number[i]-'0');

    return decimal_number;
}

string convertDecimalToOctal(long long number){
    string octal_number = "";
    while (number){
        octal_number += (number%8+'0');
        number/=8;
    }
    reverse(octal_number.begin(), octal_number.end());
    return octal_number;
}


long long convertHexDecimalToDecimal(string number){
    long long decimal_number = 0;
    reverse(number.begin(),number.end());
    for(int i = 0;i< number.size();i++)
        decimal_number += pow(16,i)*(number[i]-'0');

    return decimal_number;
}

string convertDecimalToHexDecimal(long long number){
    string hex = "0123456789ABCDEF";
    string hex_number = "";
    while (number){
        hex_number += hex[number%16];
        number/=16;
    }
    reverse(hex_number.begin(), hex_number.end());
    return hex_number;
}
