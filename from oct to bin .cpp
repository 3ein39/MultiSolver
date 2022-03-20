#include <iostream>
using namespace std;
int main()
{
	long long num_oct;
	int cases, x, bin[100] = { 0 }, i = 0;
	cout << "Enter the number of numbers : ";
	cin >> cases;
	cout << "Enter the octal number : ";
	cin >> num_oct;

	for (int count = 1; count <= cases; count++)
	{
		
		x = num_oct % 10;    //digits

		for (int count1 = 2; count1 >= 0; count1--)
		{

			bin[i] = x % 2;
			x /= 2;
			i += 1;



		}
		num_oct /= 10;

	}
	

	for (int count2 = i-1; count2 >=0; count2--)
	{
		cout << bin [count2];
	}

	return 0;
}

/*for (int count = 1; count <= cases; count++)
	{
		x = num_oct % 10;
		for (int count1 = 2; count1 >= 0; count1--)
		{

			arr[i] = x % 2;
			x /= 2;
			i+=1;

			

		}
		num_oct /= 10;
		
	}*/



/*while (num_oct!=0)
	{
		x = num_oct % 10;

		do
		{
			for (int count1 = 2; count1 >= 0; count1--)
			{

				arr[i] = x % 2;
				x /= 2;
				i += 1;



			}
		} while (x / 2 > 0);

		num_oct /= 10;
	}*/