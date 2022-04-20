 
#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype> 
#include <sstream> 
using namespace std; 
void sequence(double arr[4]);
 
void sequence(double arr[4])
{
	double diff = 0, diff2 = 0, state = 0;
	string ans; 
	
	for (int i = 3; i > 0; i--)
	{
		diff = abs(arr[i]) - abs(arr[i - 1]);
		if (diff2 != diff && i != 3)
		{
			state = 1;
			break;
		}
		diff2 = diff;
	}
	if (state != 1)
	{
		if (diff != 0)
		{
			if (arr[0] < 0 && arr[1]>0)
				cout<< " ((-1)^n)( " << abs(arr[0]) <<"+" <<diff<< "(n-1))";
			else if (arr[0] > 0 && arr[1] < 0)
				cout << " ((-1)^(n+1))( " << abs(arr[0]) << "+" << diff << "(n-1))";
			else
				cout<<arr[0]<< "+" <<diff<<"(n-1)";
			 
		}
		else
			cout<<arr[0];
	}
	else
	{
		if (arr[0] < 0 && arr[1]>0)
			cout<<"  ((-1)^n)( "<<abs(arr[0])<<"*"<<abs(arr[1] / arr[0])<<"^(n-1))";
		else if (arr[0] > 0 && arr[1] < 0)
			cout<<"  ((-1)^(n+1))("<<abs(arr[0])<<"*"<<abs(arr[1] / arr[0])<<"^(n-1))";
		else
			cout<<arr[0]<< "*"<<arr[1] / arr[0]<<"^(n-1)";
	} 
}

int main()
{

	char userkey='y';
	while (userkey == 'y')
	{
		int choice;
		cout << "             *****Welcome to sequence solver******\n";
		cout << "please enter if they are integers or fractions?\n";
		cout << "1. Integer\n";
		cout << "2. Fraction\n";
		cout << "Input: ";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		case 1:
		{
			cout << " Enter  4 numbers\n";
			double arr[4] ; 
			for (int i = 0; i < 4; i++)
			{
				cout << "a" << i + 1 << " = ";
				cin >> arr[i];
			} 
			cout << "a = ";
			sequence(arr);
			break;
		}
		case 2:
		{
			/////////////////////fractional sequence/////////////////
			//convert from string to two arrays
			double arr1[4], arr2[4];
			int k = 0;
			string  temp, str;
			for (int y = 0; y < 4; y++)
			{
				cout << "a" << y + 1 << " = ";
				cin >> str;
				for (int i = 0; i < str.size(); i++) 
					if (str[i] == '/')
					{
						for (int j = 0; j < i; j++)
							temp += str[j];

						arr1[k] = stoi(temp);
						temp = "";

						for (int j = i + 1; j < str.size(); j++)
							temp += str[j];
						arr2[k] = stoi(temp);
						temp = "";
						k++;
					} 
			}
			cout << "a = ";
			sequence(arr1);
			cout << " / ";
			sequence(arr2); 
			break;
		}
		}
		cout << "\nThanks , do you want to continue 'y'or'n': ";
		cin >> userkey; 
	}  	
}

 
