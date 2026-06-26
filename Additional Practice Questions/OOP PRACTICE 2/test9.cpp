//using namespace std;
//#include<iostream>
//class TwoD {
//	int rows;
//	int cols;
//	int** array;
//public:
//	TwoD()
//	{
//		rows = 0;
//		cols = 0;
//		array = nullptr;
//	}
//	TwoD(int r, int c)
//	{
//		rows = r;
//		cols = c;
//		array = new int* [rows];
//		for (int i = 0; i < rows; i++)
//		{
//			array[i] = new int[cols];
//		}
//
//	}
//	void Input()
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				cout << "Enter element for " << i << "," << j << endl;
//				cin >> array[i][j];
//			}
//		}
//
//	}
//	TwoD* subMatrices(TwoD &matrix)
//	{   
//		int splitR, splitC;
//		cout << "Enter Split Row: " << endl;
//		cin >> splitR;
//		cout << "Enter Split Column: " << endl;
//		cin >> splitC;
//		TwoD* Submatrices = new TwoD[4];
//		Submatrices[0] = TwoD(splitR, splitC);
//		Submatrices[1] = TwoD(splitR, cols - splitC);
//		Submatrices[2] = TwoD(rows-splitR,  splitC);
//		Submatrices[3] = TwoD(rows-splitR, cols - splitC);
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				if (i < splitR && j < splitC)
//					Submatrices[0].setElement(i, j, matrix.getElement(i, j));
//				else if (i < splitR && j >= splitC)
//					Submatrices[1].setElement(i, j - splitC, matrix.getElement(i, j));
//				else if (i >= splitR && j < splitC)
//						Submatrices[2].setElement(i - splitR, j, matrix.getElement(i, j));
//				else
//				{
//					Submatrices[3].setElement(i - splitR, j-splitC, matrix.getElement(i, j));
//				}
//
//			}
//		}
//		return Submatrices;
//
//	}
//	int getElement(int r, int c)
//	{
//		return array[r][c];
//	}
//	void setElement(int r, int c, int value)
//	{
//		array[r][c] = value;
//	}
//
//};
//int main() {
//	TwoD matrix(3, 2);
//	matrix.Input();
//	matrix.subMatrices(matrix);
//}