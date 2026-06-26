//using namespace std;
//#include<iostream>
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
//	int rows=0, cols=0;
//	cout << "Enter the number of rows: " << endl;
//	cin >> rows;
//	cout << "Enter the number of columns: " << endl;
//	cin >> cols;
//	int** array = AllocateMemory(rows, cols);
//}