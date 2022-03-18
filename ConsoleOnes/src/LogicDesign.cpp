#include "LogicDesign.h"
#include <algorithm>
#include <cmath>
#include <string>
double convertBinaryToDecimal(string number){
    long long decimal_number_int = 0;
    double decimal_number_frac = 0;
    int pos = number.find('.');
    if(pos!=string::npos) {
        string fraction_part = number.substr(pos+1);
        for(int i = 0;i<fraction_part.size();i++)
            decimal_number_frac += 1.0/pow(2,i+1)*(fraction_part[i]-'0');
    }
    else
        pos = number.size();
    string integer_part = number.substr(0,pos);

    reverse(integer_part.begin(),integer_part.end());

    for(int i = 0;i<integer_part.size();i++)
        decimal_number_int += pow(2,i)*(integer_part[i]-'0');



    return decimal_number_int+decimal_number_frac;
}

string convertDecimalToBinary(double number){
    string binary_number_int = "",binary_number_frac="";
    int integer_part = (int)number;
    double fractional_part = number - integer_part;

    while(integer_part){
        binary_number_int += (integer_part%2 +'0');
        integer_part/=2;
    }
    int t=10;
    while(t--&&fractional_part!=0){
        fractional_part*=2;
        binary_number_frac+=((int)fractional_part+'0');
        if((int)fractional_part==1)
            fractional_part-=1;
        if(fractional_part>=2)
            break;
    }
    reverse(binary_number_int.begin(),binary_number_int.end());
    string result = binary_number_int;
    if(binary_number_frac.find('1')!=string::npos)
        result +="."+binary_number_frac;
    return result;
}

double convertOctalToDecimal(string number){
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
