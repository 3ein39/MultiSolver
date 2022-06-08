 
#include <iostream> 
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std; 
int run();
void fillfractionarr();
void fillintegerarr();
bool checkinteger(std::string s);
bool checkfraction(std::string s);
void sequence(double arr[4]);
void mulsequence(double arr[4]);
string end();


int main()
{ 
	string userkey="yes";
	while (userkey.find("yes")!=-1)
	{
		int choice = run();
		switch (choice)
		{ 
		case 1: 
			fillintegerarr();
			break; 
		case 2: 
			fillfractionarr();
		    break;  
		}
		userkey = end(); 
	}  	
}
int run()
{
	int choice;
	cout << "\t\t*****Welcome to sequence solver******\n\n";
	cout << "please enter if they are integers or fractions?\n";
	cout << "1. Integer\n";
	cout << "2. Fraction\n";
	cout << "Input: ";
	cin >> choice;
	string s = to_string(choice);
	cout << "\n";
	while (choice != 1 && choice != 2)
	{
		cout << "enter a valid input : ";
		cin >> choice;
	}
	return choice;
}

void fillintegerarr()
{
	int state = 0;
	cout << " Enter  4 numbers\n";
	double arr[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "a" << i + 1 << " = ";
		cin >> arr[i];
		string s = to_string(arr[i]);
		if (!checkinteger(s))
		{
			cout << "invalid input please try again";
			state = 1;
			break;
		}
	}
	if (state != 1)
	{
		cout << "a = ";
		sequence(arr);
	}
}
void fillfractionarr()
{
	/////////////////////fractional sequence/////////////////
			//convert from string to two arrays
	double arr1[4], arr2[4];
	int k = 0, state = 0;
	string  temp, str;
	for (int i = 0; i < 4; i++)
	{
		cout << "a" << i + 1 << " = ";
		cin >> str;
		if (!checkfraction(str))
		{
			cout << " invalid input , please try again ";
			state = 1;
			break;
		}
		int in = str.find('/');
		arr1[i] = stod(str.substr(0, in));
		arr2[i] = stod(str.substr(in + 1, str.size() - in - 1));
	}
	if (state != 1)
	{
		cout << "a = ";
		sequence(arr1);
		cout << " / (";
		sequence(arr2);
		cout << " )";
	}

}
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
				cout << " ((-1)^n)( " << abs(arr[0]) << "+" << diff << "(n-1))";
			else if (arr[0] > 0 && arr[1] < 0)
				cout << " ((-1)^(n+1))( " << abs(arr[0]) << "+" << diff << "(n-1))";
			else
				cout << arr[0] << "+" << diff << "(n-1)";
		}
		else
			cout << arr[0];
	}
	else
	    mulsequence(arr);
}
void mulsequence(double arr[4])
{
	double mul = 0, mul2 = 0;
	int state = 0;
	for (int i = 3; i > 0; i--)
	{
		mul = abs(arr[i]) / abs(arr[i - 1]);
		if (mul2 != mul && i != 3)
		{
			state = 1;
			break;
		}
		mul2 = mul;
	}
	if (state != 1)
	{
		if (arr[0] < 0 && arr[1]>0)
			cout << "  ((-1)^n)( " << abs(arr[0]) << "*" << abs(arr[1] / arr[0]) << "^(n-1))";
		else if (arr[0] > 0 && arr[1] < 0)
			cout << "  ((-1)^(n+1))(" << abs(arr[0]) << "*" << abs(arr[1] / arr[0]) << "^(n-1))";
		else
			cout << arr[0] << "*" << arr[1] / arr[0] << "^(n-1)";
	}
	else
		cout << "\n It is not a sequence \n";
}

string end()
{
	string userkey;
	cout << "\nThanks , do you want to continue";
	while (userkey.find("yes") != 0 && userkey.find("no") != 0)
	{
		cout << " enter yes or no : ";
		cin >> userkey;
	}
	system("cls");
	return userkey;
}

bool checkfraction(std::string s)
{
	int cnt = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >= 48 && s[i] <= 57) || s[i] == '.' || s[i] == '/'||s[i]=='-')
			cnt++;
		if (s[i] == '.')
			cnt2++;
		if (s[i] == '/')
			cnt3++;
	}
	if (cnt2 > 2 || (s.size() == 1 && s[0] == '.') || cnt3 != 1 || cnt != s.size()
		|| s[0] == '/' || s[s.size() - 1] == '/')
		return false;
	else
		return true;
}
bool checkinteger(std::string s)
{
	int cnt = 0, cnt2 = 0;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >= 48 && s[i] <= 57) || s[i] == '.'||s[i]=='-')
			cnt++;
		if (s[i] == '.')
			cnt2++;
	}
	if (cnt2 > 2 || (s.size() == 1 && s[0] == '.') || cnt != s.size())
		return false;
	else
		return true;
}

