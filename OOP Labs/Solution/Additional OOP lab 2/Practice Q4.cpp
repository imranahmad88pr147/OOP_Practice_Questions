//#include <iostream>
//using namespace std;
//int* GetDiagonal(int** matrix, int size) {
//    int* diagonal = new int[size];
//
//    for (int i = 0; i < size; i++) {
//        diagonal[i] = matrix[i][i];
//    }
//
//    return diagonal;
//}
//
//void DisplayDiagonal(int* diagonal, int size) {
//       cout << "Diagonal elements: ";
//    for (int i = 0; i < size; i++) {
//           cout << diagonal[i];
//        if (i != size - 1) {
//               cout << ", ";
//        }
//    }
//       cout <<    endl;
//}
//
//int main() {
//    int size;
//       cout << "Enter the size of the square matrix: ";
//       cin >> size;
//
//    int** matrix = new int* [size];
//    for (int i = 0; i < size; i++) {
//        matrix[i] = new int[size];
//    }
//
//       cout << "Enter the elements of the matrix:\n";
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//               cin >> matrix[i][j];
//        }
//    }
//
//    int* diagonal = GetDiagonal(matrix, size);
//    DisplayDiagonal(diagonal, size);
//
//       for (int i = 0; i < size; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    delete[] diagonal;
//
//    return 0;
//}
