//#include <iostream>
//using namespace std;
//inline void DeallocateMemory(int** matrix, const int& rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//}
//
//int** AllocateMemory(int& rows, int& cols) {
//      cout << "Enter the number of rows: ";
//      cin >> rows;
//      cout << "Enter the number of columns: ";
//      cin >> cols;
//
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new int[cols];
//    }
//
//    return matrix;
//}
//
//void InputMatrix(int** matrix, const int& rows, const int& cols) {
//      cout << "Enter the elements of the matrix:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//              cin >> matrix[i][j];
//        }
//    }
//}
//
//void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
//      cout << "The matrix is:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//              cout << matrix[i][j] << " ";
//        }
//          cout << "\n";
//    }
//}
//
//int main() {
//    int rows, cols;
//    int** matrix = AllocateMemory(rows, cols);
//
//    InputMatrix(matrix, rows, cols);
//    DisplayMatrix(matrix, rows, cols);
//
//    DeallocateMemory(matrix, rows);
//
//    return 0;
//}
