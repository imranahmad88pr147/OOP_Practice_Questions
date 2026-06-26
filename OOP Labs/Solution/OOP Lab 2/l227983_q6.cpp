//using namespace std;
//#include<iostream>
//int* maxout(int** array, int rows, int cols) {
//	int* max_ptr = new int[rows];
//	for (int i = 0; i < rows; i++) {
//		int temp = array[i][0];
//		for (int j = 0; j < cols; j++) {
//			if (temp < array[i][j])
//				temp = array[i][j];
//		}
//		max_ptr[i] = temp;
//	}
//	return max_ptr;
//}
//void InputMatrix(int** matrix, const int& rows, const int& cols) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << "Enter element for index: " << i + 1 << " , " << j + 1 << endl;
//			cin >>matrix[i][j];
//		}
//	}
//}
//int** AllocateMemory(int& rows, int& cols) {
//	int** array = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		array[i] = new int[cols];
//	}
//	return array;
//	for (int i = 0; i < rows; i++) {
//		delete[]array[i];
//		array[i] = nullptr;
//	}
//	delete array;
//	array = nullptr;
//	
//}
//int main() {
//		int rows=0, cols=0;
//	cout << "Enter the number of rows: " << endl;
//	cin >> rows;
//	cout << "Enter the number of columns: " << endl;
//	cin >> cols;
//	int** array = AllocateMemory(rows, cols);
//	InputMatrix(array, rows, cols);
//	maxout(array, rows, cols);
//}