#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 3;
using namespace std;
int main()
{
	int matrix[SIZE][SIZE] = { {2, 2, 2},
						{3, 3, 3},
						{1, 1, 1} };
	int PP = 0;
	int X, Y;
	cout << "Before" << endl;
	for (Y = 0; Y < SIZE; Y++)
	{
		for (X = 0; X < SIZE; X++)
			cout << matrix[X][Y] << " ";
		cout << endl;
	}
	PP = matrix[2][2];
	matrix[2][2] = matrix[0][0];
	matrix[0][0] = PP;
	cout << "After" << endl;
	for (Y = 0; Y < SIZE; Y++)
	{
		for (X = 0; X < SIZE; X++)
			cout << matrix[X][Y] << " ";
		cout << endl;
	}
	cin.get();
	return 0;
}