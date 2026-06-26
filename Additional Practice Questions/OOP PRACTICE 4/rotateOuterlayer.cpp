//#include<iostream>
//using namespace std;
//
//int** allocateMatrix(int rows, int cols)
//{
//	int** matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		matrix[i] = new int[cols];
//
//	}
//	return matrix;
//}
//void inputMatrix(int** mat, int rows, int cols)
//{
//	cout << "enetr the values" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> mat[i][j];
//		}
//	}
//}
//void outputMatrix(int** mat, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << mat[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void TransposebySwap(int** mat, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = i+1; j < cols; j++)
//		{
//			int temp = mat[i][j];
//			mat[i][j] = mat[j][i];
//			mat[j][i] = temp;
//
//		}
//	}
//}
//void TransposebyNewMatrix(int** &mat, int rows, int cols)
//{
//	int** array = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		array[i] = new int[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			array[j][i] = mat[i][j];
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] mat[i];
//		mat[i] = nullptr;
//	}
//	delete[]mat;
//	mat = nullptr;
//	mat = array;
//}
//void rotateouterlayer(int** mat, int rows, int cols)
//{
//	cout << "rotation will be donwe here" << endl;
//	int a;
//	a = mat[0][0];
//	for (int i = 0; i < cols - 1; i++)
//	{
//		mat[0][i] = mat[0][i + 1];
//	}
//	for (int i = 0; i < rows - 1; i++)
//	{
//		mat[i][cols - 1] = mat[i + 1][cols - 1];
//	}
//	for (int i = cols - 1; i > 0; i--)
//	{
//		mat[rows - 1][i] = mat[rows - 1][i - 1];
//	}
//	for (int i = rows - 1; i > 0; i--)
//	{
//		mat[i][0] = mat[i - 1][0];
//	}
//	mat[1][0] = a;
//}
//int main()
//{
//	int r, c;
//	cout << "enetr rows"; cin >> r;
//	cout << "enetr cols "; cin >> c;
//	int** mat = allocateMatrix(r, c);
//	
//
//	inputMatrix(mat, r, c);
//	outputMatrix(mat, r, c);
//	//rotateouterlayer(mat, r, c);
//	TransposebyNewMatrix(mat, r, c);
//	cout << endl << endl;
//	outputMatrix(mat, r, c);
//}
