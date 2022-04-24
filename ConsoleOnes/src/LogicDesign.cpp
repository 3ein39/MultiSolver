#include "LogicDesign.h"
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

double convertBinaryToDecimal(std::string number){
    long long decimal_number_int = 0; // take integral part

    double decimal_number_frac = 0;// take fractional part

    int pos = number.find('.'); // find . if number contain fraction


    // calculate fractional part
    if(pos != std::string::npos) {
        std::string fraction_part = number.substr(pos+1);

        for(int i = 0;i<fraction_part.size();i++)
            decimal_number_frac += 1.0/pow(2,i+1)*(fraction_part[i]-'0');
    }

    else
        pos = number.size();

    std::string integer_part = number.substr(0,pos);

    reverse(integer_part.begin(),integer_part.end());

    // calculate integral part part
    for(int i = 0;i<integer_part.size();i++)
        decimal_number_int += pow(2,i)*(integer_part[i]-'0');

    // combine the whole number
    return decimal_number_int+decimal_number_frac;
}

std::string convertDecimalToBinary(double number){

    std::string binary_number_int = "",binary_number_frac="";
    int integer_part = (int)number;
    double fractional_part = number - integer_part;

    //calculate integral part
    while(integer_part){
        binary_number_int += (integer_part%2 +'0');
        integer_part/=2;
    }

    // calculate fractional part to some precision 10^-4
    int t=10;
    while (t-- && fractional_part!=0) {
        fractional_part*=2;
        binary_number_frac+=((int)fractional_part+'0');

        if((int)fractional_part==1)
            fractional_part-=1;
        if(fractional_part>=2)
            break;
    }

    reverse(binary_number_int.begin(),binary_number_int.end());

    std::string result = binary_number_int;
    //add . sign if the number contain fraction
    if(binary_number_frac.find('1')!=std::string::npos)
        result +="."+binary_number_frac;


    return result;
}

double convertOctalToDecimal(std::string number){
    long long decimal_number_int = 0;
    double decimal_number_frac = 0;


    int pos = number.find('.');
    if(pos!=std::string::npos) {
        std::string fraction_part = number.substr(pos+1);
        for(int i = 0;i<fraction_part.size();i++)
            decimal_number_frac += 1.0/pow(8,i+1)*(fraction_part[i]-'0');
    }
    else
        pos = number.size();


    std::string integer_part = number.substr(0,pos);

    reverse(integer_part.begin(),integer_part.end());

    for(int i = 0;i<integer_part.size();i++)
        decimal_number_int += pow(8,i)*(integer_part[i]-'0');


    return decimal_number_int+decimal_number_frac;
}

std::string convertDecimalToOctal(double number){

    std::string octal_number_int = "",octal_number_frac="";
    long long integer_part = number;
    double fractional_part = number - integer_part;

    while(integer_part){
        octal_number_int += (integer_part%8 +'0');
        integer_part/=8;
    }


    int t=10;
    while(t--&&fractional_part!=0){
        fractional_part*=8;
        octal_number_frac+=((int)fractional_part+'0');
        if((int)fractional_part<=7)
            fractional_part-=(int)fractional_part;
        if(fractional_part>=8)
            break;
    }


    reverse(octal_number_int.begin(),octal_number_int.end());
    std::string result = octal_number_int;
    bool check_frac = false;
    for(int i = 0;i < octal_number_frac.size();i++)
        if(octal_number_frac[i]!=0){
            check_frac = true;
            break;
        }


    if(check_frac)
        result +="."+octal_number_frac;

    return result;
}


double convertHexDecimalToDecimal(std::string number){

    long long decimal_number_int = 0;
    double decimal_number_frac = 0;
    int pos = number.find('.');

    // convert abcdf to 10 11 12 13 14 15 consecutively
    for (int i = 0;i<number.size();i++) {
        if(number[i]>='a'&&number[i]<='f')
            number[i] -= 87;
        else if(number[i]>='A'&&number[i]<='F')
            number[i] -= 55;
        else if(number[i]>='0'&&number[i]<='9')
            number[i] -= 48;
    }


    if(pos!=std::string::npos) {
        std::string fraction_part = number.substr(pos+1);
        for(int i = 0;i < fraction_part.size();i++)
            decimal_number_frac += 1.0/pow(16,i+1)*((int)fraction_part[i]);
    }
    else
        pos = number.size();


    std::string integer_part = number.substr(0,pos);

    reverse(integer_part.begin(),integer_part.end());

    for(int i = 0;i<integer_part.size();i++)
        decimal_number_int += pow(16,i)*((int)integer_part[i]);


    return decimal_number_int+decimal_number_frac;
}

std::string convertDecimalToHexDecimal(double number){


    std::string hex = "0123456789ABCDEF";
    std::string hex_number_int = "",hex_number_frac="";
    long long integer_part = number;
    double fractional_part = number - integer_part;

    while (integer_part) {
         // take number % 16 give me (0:15) idx from string hex above
        hex_number_int += hex[integer_part%16];
        integer_part/=16;
    }

    // calculate fractional part to some precision 10^-13
    int t=10;
    while(t--&&fractional_part!=0){
        fractional_part*=16;
        hex_number_frac+=hex[(int)fractional_part];
        if((int)fractional_part<=15)
            fractional_part-=(int)fractional_part;
        if(fractional_part>=16)
            break;
    }


    reverse(hex_number_int.begin(),hex_number_int.end());
    std::string result = hex_number_int;

    bool check_frac = false;
    for(int i = 0;i < hex_number_frac.size();i++)
        if(hex_number_frac[i]!=0){
            check_frac = true;
            break;
        }


    if(check_frac)
        result +="."+hex_number_frac;


    return result;
}


std::string convertBinaryToOctal(std::string number){
    return convertDecimalToOctal(convertBinaryToDecimal(number));
}

std::string convertBinaryToHexDecimal(std::string number){
    return convertDecimalToHexDecimal(convertBinaryToDecimal(number));
}

std::string convertOctalToBinary(std::string number){
    return convertDecimalToBinary(convertOctalToDecimal(number));
}

std::string convertOctalToHexDecimal(std::string number){
    return convertDecimalToHexDecimal(convertHexDecimalToDecimal(number));
}

std::string convertHexDecimalToBinary(std::string number){
    return convertDecimalToBinary(convertHexDecimalToDecimal(number));
}

std::string convertHexDecimalToOctal(std::string number){
    return convertDecimalToOctal(convertHexDecimalToDecimal(number));
}

std::string getFunctionFromTruthTable(int numberOfInputs, std::vector<int> &output) {

    // given a truth table .. get the function
    std::string function = "";

    if (numberOfInputs == 3) {
        std::string minTerms[8] = {"XYZ", "XYz", "XyZ", "Xyz",
                                   "xYZ", "xYz", "xyZ", "xyz"};

        bool first = true; // set (+) sign after all minTerms except for first one
        for (int i = 0; i < 8; i++) { // loop to get 8 inputs
            if (output[i] == 1){
                if(!first)
                    function+=" + ";

                function += minTerms[i];

                first = false;
            }
        }

    } else if (numberOfInputs == 2) {
        std::string minTerms[4] = {"XY", "Xy", "xY", "xy"};

        bool first = true; // set (+) sign after all minTerms except for first one

        for (int i = 0; i < 4; i++) {
            if (output[i] == 1) {

                if(!first)
                    function += " + ";

                function += minTerms[i];

                first = false;
            }
        }
    }
    return function;
}
