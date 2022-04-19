 

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <stdlib.h>
/////////////////converting system string to std string////////////////////
/*char cStr[50] = { 0 };
String^ clrString = textBox9->Text;
if (clrString->Length < sizeof(cStr))
	sprintf(cStr, "%s", clrString);
std::string str(cStr);*/
/*String^ str2 = gcnew String(ans.c_str());
label13->Text = str2;*/

using namespace std;

int main()
{
	////////////////////////////////////////////binary to hexa//////////////////////////////////////////

	/*
	long long size=0 ,counter = 0, mod = 0, dec = 0, j = 0, x = 0;
	string str,hex,hexf,ans;
	cin >> str;
	while (str[x] != '.')
	{
		size++;
		x++;
	}
	//the part <4th
	mod = size % 4;
	 //101 012
	if (mod != 0)
	{
		for (int i = mod - 1; i >= 0; i--)
		{

			if (str[i] == '1')
			{
				dec += pow(2, j);
			}
			j++;
		}
		if (dec < 10)
			hex += dec + 48;
		else
			hex += dec + 55;
	}

	 //the 4th part
	dec = 0;
	for (int i =size-1; i >=mod; i--)
	{
		if (str[i] == '1')
		{
			dec += pow(2, counter);
		}
		counter++;
		if (counter == 4)
		{
			if (dec < 10)
				hex += dec + 48;
			else
				hex += dec + 55;
			dec = 0;
			counter = 0;
		}


	}
	if (mod != 0)
		reverse(hex.begin() + 1, hex.end());
	else
		reverse(hex.begin(), hex.end());


	//the fractional part
	dec = 0;
	counter = 3;
	for (int i =size+1; i<str.size(); i++)
	{
		if (str[i] == '1')
		{
			dec += pow(2, counter);
		}
		counter--;
		if (counter == -1)
		{
			if (dec < 10)
				hexf += dec + 48;
			else
				hexf += dec + 55;
			dec = 0;
			counter = 3;
		}
	}
	ans = hex + "." + hexf;
	cout << ans;*/


	/////////////////////////////////////////////hexa to binary////////////////////////////////////////
	/*string str, bin, dec, bin1, ans;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
		{
			ans += '.';
			i++;
		}
		if (str[i] <59)
		{
			int dec =str[i]-48; //convert char to int
			while (dec != 0)
			{
				if (dec % 2 == 0)
					bin += '0';
				else
					bin += '1';
				 dec/= 2;
			}
			reverse(bin.begin(), bin.end());
			if (bin.size() < 4)
			{
				for (int i = 0; i < 4-bin.size(); i++)
				{
					bin1 += '0';
				}
			}
			bin1 += bin;
		}
		else
		{
			switch (str[i])
			{
			case 'A':
				bin1 = "1010";
				break;
			case 'B':
				bin1 = "1011";
				break;
			case 'C':
				bin1 = "1100";
				break;
			case 'D':
				bin1 = "1101";
				break;
			case 'E':
				bin1 = "1110";
				break;
			case 'F':
				bin1 = "1111";
				break;
			}
		}
		ans += bin1;
		bin1 = "";
		bin = "";

	}
	cout << ans;*/

 /////////////////////////////////////octal to binary///////////////////////////////////////
     
	/* string str, bin, dec, bin1, ans;
	 cin >> str;
	 for (int i = 0; i < str.size(); i++)
	 {
		 if (str[i] == '.')
		 {
			 ans += '.';
			 i++;
		 }
		 if (str[i] < 59)
		 {
			 int dec = str[i] - 48; //convert char to int
			 while (dec != 0)
			 {
				 if (dec % 2 == 0)
					 bin += '0';
				 else
					 bin += '1';
				 dec /= 2;
			 }
			 reverse(bin.begin(), bin.end());
			 if (bin.size() < 3)
			 {
				 for (int i = 0; i < 3 - bin.size(); i++)
				 {
					 bin1 += '0';
				 }
			 }
			 bin1 += bin;
		 }
		 ans += bin1;
		 bin1 = "";
		 bin = "";

	 }
	 cout << ans; */


	    


///////////////////////////////////binary to octal//////////////////////////////////
     
	 /*long long size = 0, counter = 0, mod = 0, dec = 0, j = 0, x = 0;
	 string str, hex, hexf, ans;
	 cin >> str;

	 while (str[x] != '.')
	 {
		 size++;
		 x++;
	 }
	 //the part <4th
	 mod = size % 3;
	 //101 012
	 if (mod != 0)
	 {
		 for (int i = mod - 1; i >= 0; i--)
		 {

			 if (str[i] == '1')
			 {
				 dec += pow(2, j);
			 }
			 j++;
		 }
		 if (dec < 10)
			 hex += dec + 48;
		 else
			 hex += dec + 55;
	 }

	 //the 4th part
	 dec = 0;
	 for (int i = size - 1; i >= mod; i--)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter++;
		 if (counter == 3)
		 {
			 if (dec < 10)
				 hex += dec + 48;
			 else
				 hex += dec + 55;
			 dec = 0;
			 counter = 0;
		 }


	 }
	 if (mod != 0)
		 reverse(hex.begin() + 1, hex.end());
	 else
		 reverse(hex.begin(), hex.end());


	 //the fractional part
	 dec = 0;
	 counter = 2;
	 for (int i = size + 1; i < str.size(); i++)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter--;
		 if (counter == -1)
		 {
			 if (dec < 10)
				 hexf += dec + 48;
			 else
				 hexf += dec + 55;
			 dec = 0;
			 counter = 2;
		 }
	 }
	 ans = hex + "." + hexf;
	 cout << ans; */

	       
 /////////////////////////////////////////////hexa to octal////////////////////////////////////////
     
	 /*string str, bin, bin1, ans;
	 cin >> str;
	 for (int i = 0; i < str.size(); i++)
	 {
		 if (str[i] == '.')
		 {
			 ans += '.';
			 i++;
		 }
		 if (str[i] < 59)
		 {
			 int dec = str[i] - 48; //convert char to int
			 while (dec != 0)
			 {
				 if (dec % 2 == 0)
					 bin += '0';
				 else
					 bin += '1';
				 dec /= 2;
			 }
			 reverse(bin.begin(), bin.end());
			 if (bin.size() < 4)
			 {
				 for (int i = 0; i < 4 - bin.size(); i++)
				 {
					 bin1 += '0';
				 }
			 }
			 bin1 += bin;
		 }
		 else
		 {
			 switch (str[i])
			 {
			 case 'A':
				 bin1 = "1010";
				 break;
			 case 'B':
				 bin1 = "1011";
				 break;
			 case 'C':
				 bin1 = "1100";
				 break;
			 case 'D':
				 bin1 = "1101";
				 break;
			 case 'E':
				 bin1 = "1110";
				 break;
			 case 'F':
				 bin1 = "1111";
				 break;
			 }
		 }
		 ans += bin1;
		 bin1 = "";
		 bin = "";

	 }

	 long long size = 0, counter = 0, mod = 0, dec = 0, j = 0, x = 0;
	 string   hex, hexf;
	 str = ans;
	 ans = "";

	 while (str[x] != '.')
	 {
		 size++;
		 x++;
	 }
	 //the part <4th
	 mod = size % 3;
	 //101 012
	 if (mod != 0)
	 {
		 for (int i = mod - 1; i >= 0; i--)
		 {

			 if (str[i] == '1')
			 {
				 dec += pow(2, j);
			 }
			 j++;
		 }
		 if (dec < 10)
			 hex += dec + 48;
		 else
			 hex += dec + 55;
	 }

	 //the 4th part
	 dec = 0;
	 for (int i = size - 1; i >= mod; i--)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter++;
		 if (counter == 3)
		 {
			 if (dec < 10)
				 hex += dec + 48;
			 else
				 hex += dec + 55;
			 dec = 0;
			 counter = 0;
		 }


	 }
	 if (mod != 0)
		 reverse(hex.begin() + 1, hex.end());
	 else
		 reverse(hex.begin(), hex.end());


	 //the fractional part
	 dec = 0;
	 counter = 2;
	 for (int i = size + 1; i < str.size(); i++)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter--;
		 if (counter == -1)
		 {
			 if (dec < 10)
				 hexf += dec + 48;
			 else
				 hexf += dec + 55;
			 dec = 0;
			 counter = 2;
		 }
	 }
	 ans = hex + "." + hexf;
	 cout << ans; */


//////////////////////////////octal to hexa////////////////////////////
      
	 /*string str, bin, bin1, ans;
	 cin >> str;
	 for (int i = 0; i < str.size(); i++)
	 {
		 if (str[i] == '.')
		 {
			 ans += '.';
			 i++;
		 }
		 if (str[i] < 59)
		 {
			 int decimal = str[i] - 48; //convert char to int
			 while (decimal != 0)
			 {
				 if (decimal % 2 == 0)
					 bin += '0';
				 else
					 bin += '1';
				 decimal /= 2;
			 }
			 reverse(bin.begin(), bin.end());
			 if (bin.size() < 3)
			 {
				 for (int i = 0; i < 3 - bin.size(); i++)
				 {
					 bin1 += '0';
				 }
			 }
			 bin1 += bin;
		 }
		 ans += bin1;
		 bin1 = "";
		 bin = "";

	 }
	 str = ans;
	 long long size = 0, counter = 0, mod = 0, dec = 0, j = 0, x = 0;
	 string  hex, hexf;

	 while (str[x] != '.')
	 {
		 size++;
		 x++;
	 }
	 //the part <4th
	 mod = size % 4;
	 //101 012
	 if (mod != 0)
	 {
		 for (int i = mod - 1; i >= 0; i--)
		 {

			 if (str[i] == '1')
			 {
				 dec += pow(2, j);
			 }
			 j++;
		 }
		 if (dec < 10)
			 hex += dec + 48;
		 else
			 hex += dec + 55;
	 }

	 //the 4th part
	 dec = 0;
	 for (int i = size - 1; i >= mod; i--)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter++;
		 if (counter == 4)
		 {
			 if (dec < 10)
				 hex += dec + 48;
			 else
				 hex += dec + 55;
			 dec = 0;
			 counter = 0;
		 }


	 }
	 if (mod != 0)
		 reverse(hex.begin() + 1, hex.end());
	 else
		 reverse(hex.begin(), hex.end());


	 //the fractional part
	 dec = 0;
	 counter = 3;
	 for (int i = size + 1; i < str.size(); i++)
	 {
		 if (str[i] == '1')
		 {
			 dec += pow(2, counter);
		 }
		 counter--;
		 if (counter == -1)
		 {
			 if (dec < 10)
				 hexf += dec + 48;
			 else
				 hexf += dec + 55;
			 dec = 0;
			 counter = 3;
		 }
	 }
	 ans = hex + "." + hexf;
	 cout << ans; */


				


////////////////////////////////////decimal to binary/////////////////////////////////
      
	 /*double number = 0.0;
	 cin >> number;
	 string binary_number_int = "", binary_number_frac = "";
	 int integer_part = (int)number;
	 double fractional_part = number - integer_part;
	 while (integer_part) {
		 binary_number_int += (integer_part % 2 + '0');
		 integer_part /= 2;
	 }
	 int t = 10;
	 while (t-- && fractional_part != 0) {
		 fractional_part *= 2;
		 binary_number_frac += ((int)fractional_part + '0');
		 if ((int)fractional_part == 1)
			 fractional_part -= 1;
		 if (fractional_part >= 2)
			 break;
	 }
	 reverse(binary_number_int.begin(), binary_number_int.end());
	 string result = binary_number_int;
	 if (binary_number_frac.find('1') != string::npos)
		 result += "." + binary_number_frac;
	 cout << result; */
			   
////////////////////////////////////////binary to decimal//////////////////////////////
      
	/* double temp = System::Convert::ToDouble(textBox2->Text);
				 std::string str;
				 str.append(std::to_string(temp));
				 //String^ str2 = gcnew String(str.c_str());
				  

	 
	 reverse(str.begin(), str.end());
	 double decimal = 0;
	 for (int i = 0; i < str.size(); i++)
	 {
		 if ((i - 6) <= 0)
		 {
			 if (str[i] == '1')
			 {
				 decimal += pow(2, i - 6);
			 }
		 }
		 else
		 {
			 if (str[i] == '1')
			 {
				 decimal += pow(2, i - 7);
			 }
		 }


	 }

	 //label10->Text = System::Convert::ToString(decimal); */

				

 
	 
	///////////////////////////decimal to octal///////////////////////////// 
	/*double number = 0.0;
	cin >> number;
	string binary_number_int = "", binary_number_frac = "";
	int integer_part = (int)number;
	double fractional_part = number - integer_part;
	while (integer_part) {
		binary_number_int += (integer_part % 2 + '0');
		integer_part /= 2;
	}
	int t = 10;
	while (t-- && fractional_part != 0) {
		fractional_part *= 2;
		binary_number_frac += ((int)fractional_part + '0');
		if ((int)fractional_part == 1)
			fractional_part -= 1;
		if (fractional_part >= 2)
			break;
	}
	reverse(binary_number_int.begin(), binary_number_int.end());
	string result = binary_number_int;
	if (binary_number_frac.find('1') != string::npos)
		result += "." + binary_number_frac;

	long long size = 0, counter = 0, mod = 0, dec = 0, j = 0, x = 0;
	string str, hex, hexf, ans;
	str = result;

	while (str[x] != '.')
	{
		size++;
		x++;
	}
	//the part <4th
	mod = size % 3;
	//101 012
	if (mod != 0)
	{
		for (int i = mod - 1; i >= 0; i--)
		{

			if (str[i] == '1')
			{
				dec += pow(2, j);
			}
			j++;
		}
		if (dec < 10)
			hex += dec + 48;
		else
			hex += dec + 55;
	}

	//the 4th part
	dec = 0;
	for (int i = size - 1; i >= mod; i--)
	{
		if (str[i] == '1')
		{
			dec += pow(2, counter);
		}
		counter++;
		if (counter == 3)
		{
			if (dec < 10)
				hex += dec + 48;
			else
				hex += dec + 55;
			dec = 0;
			counter = 0;
		}


	}
	if (mod != 0)
		reverse(hex.begin() + 1, hex.end());
	else
		reverse(hex.begin(), hex.end());


	//the fractional part   
	dec = 0;
	counter = 2;
	for (int i = size + 1; i < str.size(); i++)
	{
		if (str[i] == '1')
		{
			dec += pow(2, counter);
		}
		counter--;
		if (counter == -1)
		{
			if (dec < 10)
				hexf += dec + 48;
			else
				hexf += dec + 55;
			dec = 0;
			counter = 2;
		}
	}
	ans = hex + "." + hexf;
	cout <<ans;*/


	//////////////////////////////decimal to hexa///////////////////////////////
		//problem only two numbers after the point //may be because of taking the input in double
	    /*double number = 0.0;
		cin >> number;
		string binary_number_int = "", binary_number_frac = "";
		int integer_part = (int)number;
		double fractional_part = number - integer_part;
		while (integer_part) {
			binary_number_int += (integer_part % 2 + '0');
			integer_part /= 2;
		}
		int t = 10;
		while (t-- && fractional_part != 0) {
			fractional_part *= 2;
			binary_number_frac += ((int)fractional_part + '0');
			if ((int)fractional_part == 1)
				fractional_part -= 1;
			if (fractional_part >= 2)
				break;
		}
		reverse(binary_number_int.begin(), binary_number_int.end());
		string result = binary_number_int;
		if (binary_number_frac.find('1') != string::npos)
			result += "." + binary_number_frac;

		//cout << result<<"**";
		long long size = 0, counter = 0, mod = 0, dec = 0, j = 0, x = 0;
		string str, hex, hexf, ans;
		str = result;
		 
		while (str[x] != '.')
		{
			size++;
			x++;
		}
		//the part <4th
		mod = size % 4;
		//101 012
		if (mod != 0)
		{
			for (int i = mod - 1; i >= 0; i--)
			{

				if (str[i] == '1')
				{
					dec += pow(2, j);
				}
				j++;
			}
			if (dec < 10)
				hex += dec + 48;
			else
				hex += dec + 55;
		}

		//the 4th part
		dec = 0;
		for (int i = size - 1; i >= mod; i--)
		{
			if (str[i] == '1')
			{
				dec += pow(2, counter);
			}
			counter++;
			if (counter == 4)
			{
				if (dec < 10)
					hex += dec + 48;
				else
					hex += dec + 55;
				dec = 0;
				counter = 0;
			}


		}
		if (mod != 0)
			reverse(hex.begin() + 1, hex.end());
		else
			reverse(hex.begin(), hex.end());


		//the fractional part
		dec = 0;
		counter = 3;
		for (int i = size + 1; i < str.size(); i++)
		{
			if (str[i] == '1')
			{
				dec += pow(2, counter);
			}
			counter--;
			if (counter == -1)
			{
				if (dec < 10)
					hexf += dec + 48;
				else
					hexf += dec + 55;
				dec = 0;
				counter = 3;
			}
		}
		ans = hex + "." + hexf;
		cout << ans;*/


		//////////////////////////////////////octal to decimal//////////////////////////////////
			///////////////////////////xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
			/*int s = 0;
			string str, bin, dec, bin1, ans;
			cin >> str;
			for (int i = 0; i < str.size(); i++)
			{
				if (str[i] == '.')
				{
					ans += '.';
					i++;
				}
				if (str[i] < 59)
				{
					int dec = str[i] - 48; //convert char to int
					while (dec != 0)
					{
						if (dec % 2 == 0)
							bin += '0';
						else
							bin += '1';
						dec /= 2;
					}
					reverse(bin.begin(), bin.end());


						if (bin.size() < 3)
						{
							for (int i = 0; i < 3 - bin.size(); i++)
							{
								bin1 += '0';
							}
						}
						bin1 += bin;

				}
				ans += bin1;
				bin1 = "";
				bin = "";

			}

			string str1;
			str1 = ans;
			ans = "";

			reverse(str1.begin(), str1.end());
			double decimal = 0;
			for (int i = 0; i < str1.size(); i++)
			{
				if ((i - 6) <= 0)
				{
					if (str1[i] == '1')
					{
						decimal += pow(2, i - 6);
					}
				}
				else
				{
					if (str1[i] == '1')
					{
						decimal += pow(2, i - 7);
					}
				}
			}
			cout << decimal;*/

	
 

	
	//////////////////solution ///////////////////////
	/*#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 122.345;

    cout << fixed;
    cout << setprecision(2);
    cout << d;
}*/


 





	  
	 

	 
}


