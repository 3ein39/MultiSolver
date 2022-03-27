#include <iostream>
using namespace std;
int main()
{
	long long num_bin;
	int cases, sum = 0, octal[100], choice;

	cout << "1-int num " << endl;
	cout << "2-float num " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:

		cout << " enter the number of numbers : ";
		cin >> cases;
		cout << "enter the binary number : ";
		cin >> num_bin;

		cases = cases / 3;
		if (cases % 3 != 0)
			cases += 1;
		break;
	case 2:
		cout << "enter the number of numbers : ";
		cin >> cases;
		cout << "enter the binary number : ";
		cin >> num_bin;

		if (cases % 3 == 1)
		{
			num_bin *= 100;
			cases += 1;
		}

		else if (cases % 3 == 2)
		{
			num_bin *= 10;
			cases += 1;
		}
		cases = cases / 3;

		break;
	}

	for (int count = 0; count < cases; count++)
	{
		if (num_bin % 10 == 1)
			sum += 1;
		if ((num_bin % 100)/10 == 1 )
			sum += 2;
		if ((num_bin % 1000)/100 == 1)
			sum += 4;
		octal[count] = sum;
		sum = 0;
		num_bin /= 1000;
	}


	for (int count1 = cases - 1; count1 >= 0; count1--)
	{
		cout << octal[count1];
	}

	return 0;
}