#include<iostream>
using namespace std;
int** AllocateMemory(int& rows, int& cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	return arr;
}
void InputMatrix(int** matrix, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
void DisplayMatrix(int** matrix, const int& rows, const int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}
void swapTriangular(int** matrix, const int& rows, const int& cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0, k = rows - 1; i < rows; i++, k--)
	{
		for (int j = 0, l = cols - 1; j < cols; j++, l--)
		{
			arr[i][j] = matrix[k][l];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = arr[i][j];
		}
	}

}
int main() {
	int rows, cols;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;

	int** matrix = AllocateMemory(rows, cols);

	InputMatrix(matrix, rows, cols);
	cout << "This is the Matrix: " << endl;
	DisplayMatrix(matrix, rows, cols);
	cout << endl;
	swapTriangular(matrix, rows, cols);
	cout << "This is the matrix after the swap:" << endl;
	DisplayMatrix(matrix, rows, cols);

}