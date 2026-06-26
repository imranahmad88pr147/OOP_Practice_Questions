//#include <iostream>
//using namespace std;
//
//bool IsMatrixUpperTriangular(int** matrix, int size) {
//    for (int i = 1; i < size; i++) {
//        for (int j = 0; j < i; j++) {
//            if (matrix[i][j] != 0) {
//                return false;
//            }
//        }
//    }
//
//    return true;
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
//    bool isUpperTriangular = IsMatrixUpperTriangular(matrix, size);
//
//    if (isUpperTriangular) {
//           cout << "The matrix is upper triangular.\n";
//    }
//    else {
//           cout << "The matrix is not upper triangular.\n";
//    }
//
//    for (int i = 0; i < size; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}
