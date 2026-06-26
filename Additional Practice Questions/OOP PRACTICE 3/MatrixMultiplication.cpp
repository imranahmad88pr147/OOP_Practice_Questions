//using namespace std;
//#include<iostream>
//class matrix {
//	int rows1;
//	int cols1;
//	int** array1;
//public:
//	matrix()
//	{
//		rows1 = 0;
//		cols1 = 0;
//		array1 = nullptr;
//	}
//	matrix(int r, int c)
//	{
//		rows1 = r;
//		cols1 = c;
//		array1 = new int* [rows1];
//		for (int i = 0; i < rows1; i++)
//		{
//			array1[i] = new int[cols1];
//		}
//	}
//	void input()
//	{
//		for (int i = 0; i < rows1; i++)
//		{
//			for (int j = 0; j < cols1; j++)
//			{
//				cout << "enter element for index " << i << "," << j << endl;
//				cin >> array1[i][j];
//			}
//		}
//	}
//	int getelement(int r, int c)
//	{
//		return array1[r][c];
//	}
//	
//	int** mul()
//	{
//		int cols2 = 2, rows2 = 3;
//		matrix matrix2(rows2, cols2);
//		int** result = new int* [rows1];
//		for (int i = 0; i < rows1; i++) {
//			result[i] = new int[cols2];
//		}
//        matrix2.input();
//		//a=mxn,b=nxp then ab=resultant matrix= mxp.
//		for (int i = 0; i < rows1; i++) {
//			for (int j = 0; j < cols2; j++) {
//				result[i][j] = 0;
//				for (int k = 0; k < cols1; k++) {
//					result[i][j] += array1[i][k] * matrix2.getelement(k, j);
//				}
//			}
//		}
//		return result;
//	}
//};
//int main() {
//	matrix obj(2, 3);
//	int** array3;
//	obj.input();
//	array3=obj.mul();
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j <2; j++) {
//			cout << "element at index " << i << "," << j << " is " << array3[i][j] << endl;
//		}
//	}
//
//}