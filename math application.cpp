 

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype> 
#include <sstream> 
#include <stdlib.h>
using namespace std;
 
void adjoint(int** arr, int row, int col);
void transpose(int** arr, int row, int col);
void determinant(int** arr, int row, int col);
void Inverse(int** arr, int row, int col);
void Symmetric(int** arr, int row, int col);
void SkewSymmetric(int** arr, int row, int col);
void Singular(int** arr, int row, int col);
void Addition(int** arr1, int row1, int col1, int** arr2, int row2, int col2);
void Subtraction(int** arr1, int row1, int col1, int** arr2, int row2, int col2);
void Multiplication(int** arr1, int row1, int col1, int** arr2, int row2, int col2);


int main()
{     
	char userkey = 'y';
	while (userkey == 'y')
	{ 
		int NumberOfMatrices;
		cout << "             *****Welcome to matrices solver******\n";
		cout << "please enter how many matrices do you want?\n";
		cout << "1. 1 matrix\n";
		cout << "2. 2 matrices\n";
		cout << "Input: ";
		cin >> NumberOfMatrices;
		cout << "\n";
		switch (NumberOfMatrices)
		{
		case 1:
		{ 
			cout << "1. Transpose\n";
			cout << "2. Special matrices\n";
			cout << "3. Deterinment\n";
			cout << "4. Adjoint \n";
			cout << "5. Inverse\n";
			cout << "Input: ";
			int OppertionIn1 = 0;
			cin >> OppertionIn1;
			int row, colum;
			cout << "Enter rows and colums of matrix: ";
			cin >> row >> colum;
			cout << "\nEnter elements of matrix: \n";
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[colum];
			for (int i = 0; i < row; i++)
				for (int j = 0; j < colum; j++)
					cin >> arr[i][j];
			if (row != colum)
				cout << "Invalid input";
			else
			{
				switch (OppertionIn1)
				{
				case 1:
					cout << "the transpose of the matrix \n";
					transpose(arr, row, colum);
					break;
				case 2:
					Symmetric(arr, row, colum);
					SkewSymmetric(arr, row, colum);
					Singular(arr, row, colum);
					break;
				case 3:
					cout << "Determinant of the matrix\n";
					determinant(arr, row, colum);
					break;
				case 4:
					cout << "Adjoint of the matrix\n";
					adjoint(arr, row, colum);
					break;
				case 5:
					cout << "Inverse of the matrix\n";
					Inverse(arr, row, colum);
					break;
				default:
					cout << "Invalid input\n";
				}
			}
		}
			break;
		case 2:
			cout << "1. Addition\n";
			cout << "2. Subtraction\n";
			cout << "3. Multiplication\n"; 
			cout << "input: ";
			int OppertionIn2 = 0;
			cin >> OppertionIn2;

			int  row1, colum1;
			cout << "Enter rows and colums of matrix1: ";
			cin >> row1 >> colum1;
			cout << "\nEnter elements of matrix1: \n";
			int** arr1 = new int* [row1];
			for (int i = 0; i < row1; i++)
				arr1[i] = new int[colum1];
			for (int i = 0; i < row1; i++)
				for (int j = 0; j < colum1; j++)
					cin >> arr1[i][j];

			int  row2, colum2;
			cout << "Enter rows and colums of matrix2: ";
			cin >> row2 >> colum2;
			cout << "\nEnter elements of matrix2: \n";
			int** arr2 = new int* [row2];
			for (int i = 0; i < row2; i++)
				arr2[i] = new int[colum2];
			for (int i = 0; i < row2; i++)
				for (int j = 0; j < colum2; j++)
					cin >> arr2[i][j];
			switch (OppertionIn2)
			{
			case 1:
				if (row1 != row2 || colum1 != colum2)
					cout << "invalid input, please try again\n";
				else {
					cout << "the sum is \n";
					Addition(arr1, row1, colum1, arr2, row2, colum2);
				}
			break;
			case 2:
				if (row1 != row2 || colum1 != colum2)
					cout << "invalid input, please try again\n";
				else {
					cout << "the Subtraction is \n";
					Subtraction(arr1, row1, colum1, arr2, row2, colum2);
				}
				break;
			case 3:
				if (row2!=colum1)
					cout << "invalid input, please try again\n";
				else {
					cout << "the Multiplication is \n";
					Multiplication(arr1, row1, colum1, arr2, row2, colum2);
				}
				break;
			}

		}
		cout << "\nThanks , do you want to continue 'y'or'n': ";
		cin >> userkey;
	}

}

//functions

void Multiplication(int** arr1, int row1, int col1, int** arr2, int row2, int col2)
{  
	int mul = 0; 
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			for (int k = 0; k < col1; ++k)
			{
				mul += arr1[i][k] * arr2[k][j];
			}
			cout << mul  << " ";
			mul = 0;
		}
		cout << "\n";
	} 
}

void Subtraction(int** arr1, int row1, int col1, int** arr2, int row2, int col2)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
			cout << arr1[i][j] - arr2[i][j] << " ";
		cout << "\n";
	}
}


void Addition(int** arr1, int row1, int col1, int** arr2, int row2, int col2)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
			cout << arr1[i][j] + arr2[i][j] << " ";
		cout << "\n";
	}
}

void Singular(int** arr, int row, int col)
{
	int determinant = 0, state = 0;
	if (row == 3)
	{
		int** arr1 = new int* [3];
		for (int i = 0; i < 3; i++)
			arr1[i] = new int[3];
		int   x = 0, z = 0, y = 2, a = 2, b = -1;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				if (x == r)
					x++;
				if (c == 0)
					z = 1;
				if (c == 2)
					a = 1;
				if (y == x || y == r)
					y--;
				b *= (-1);
				arr1[r][c] = b * ((arr[x][z] * arr[y][a]) - (arr[x][a] * arr[y][z]));
				z = 0;
				a = 2;
				x = 0;
				y = 2;
			}
		}
		for (int i = 0; i < 3; i++)
			determinant += arr[0][i] * arr1[0][i];
	}
	else
		determinant = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	if (determinant)
		cout << " Non-Singular,";
	else
		cout << "Singular,";
}

void SkewSymmetric(int** arr, int row, int col)
{
	int transpose[5][5], state = 0;
	// Computing transpose of the matrix
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			transpose[j][i] = arr[i][j];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (arr[i][j] != -1 * transpose[i][j])
				state = 1;
	if (state == 0)
		cout << "Skew Symmetric Matrix,";
}

void Symmetric(int** arr, int row, int col)
{
	int transpose[5][5], state = 1;
	// Computing transpose of the matrix
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			transpose[j][i] = arr[i][j];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (arr[i][j] != transpose[i][j])
				state = 0;
	if (state)
		cout << "Symmetric Matrix,";
}


void Inverse(int** arr, int row, int col)
{
	int state = 0, d = 0, determinant = 0;
	if (row == 3)
	{
		int transpose[3][3], inverse[3][3], state = 0;
		int** arr1 = new int* [3];
		for (int i = 0; i < 3; i++)
			arr1[i] = new int[3];
		int   x = 0, z = 0, y = 2, a = 2, b = -1;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				if (x == r)
					x++;
				if (c == 0)
					z = 1;
				if (c == 2)
					a = 1;
				if (y == x || y == r)
					y--;
				b *= (-1);
				arr1[r][c] = b * ((arr[x][z] * arr[y][a]) - (arr[x][a] * arr[y][z]));
				z = 0;
				a = 2;
				x = 0;
				y = 2;
			}
		}
		for (int i = 0; i < 3; i++)
			determinant += arr[0][i] * arr1[0][i];
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				transpose[j][i] = arr1[i][j];

		// Inverse
		cout << " Inverse of the matrix \n " << endl;
		for (int row = 0; row < 3; row++) {
			for (int col = 0; col < 3; col++) {
				if (determinant != 0) {
					inverse[row][col] = (1 / determinant) * transpose[row][col];
					cout << inverse[row][col] << " ";
				}
				else
					state = 1;
			}
			cout << "\n";
		}
		d = (1 / determinant);
	}
	else
	{
		determinant = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
		if (determinant == 0)
			state = 1;
	}
	if (state)
		cout << "Invalid, because determinant = 0 ";
}


void determinant(int** arr, int row, int col)
{
	int determinant = 0;
	if (row == 3)
	{
		int** arr1 = new int* [3];
		for (int i = 0; i < 3; i++)
			arr1[i] = new int[3];
		int   x = 0, z = 0, y = 2, a = 2, b = -1;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				if (x == r)
					x++;
				if (c == 0)
					z = 1;
				if (c == 2)
					a = 1;
				if (y == x || y == r)
					y--;
				b *= (-1);
				arr1[r][c] = b * ((arr[x][z] * arr[y][a]) - (arr[x][a] * arr[y][z]));
				z = 0;
				a = 2;
				x = 0;
				y = 2;
			}
		}
		for (int i = 0; i < 3; i++)
			determinant += arr[0][i] * arr1[0][i];
	}
	else
		determinant = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);

	cout << "Determinant = " << determinant << "\n";
}



void adjoint(int** arr, int row, int col)
{
	if (row == 3)
	{
		int** arr1 = new int* [3];
		for (int i = 0; i < 3; i++)
			arr1[i] = new int[3];
		int   x = 0, z = 0, y = 2, a = 2, b = -1, determinant = 0;
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				if (x == r)
					x++;
				if (c == 0)
					z = 1;
				if (c == 2)
					a = 1;
				if (y == x || y == r)
					y--;
				b *= (-1);
				arr1[r][c] = b * ((arr[x][z] * arr[y][a]) - (arr[x][a] * arr[y][z]));
				z = 0;
				a = 2;
				x = 0;
				y = 2;
			}
		}
		transpose(arr1, 3, 3);
	}
	else
		cout << arr[1][1] << " " << -1 * arr[0][1] << "\n" << -1 * arr[1][0] << " " << arr[0][0];

}

void transpose(int** arr, int row, int col)
{
	int transpose[5][5];
	// Computing transpose 
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			transpose[j][i] = arr[i][j];
	// Printing transpose 
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++)
			cout << " " << transpose[i][j];
		cout << "\n";
	}
}



 
