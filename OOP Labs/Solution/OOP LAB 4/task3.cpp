#include <iostream>
using namespace std;

class Matrix {
    int** array;
    int dimension;
    int rows;
    int cols;

public:
    Matrix() {
        array = nullptr;
        rows = 0;
        cols = 0;
        dimension = 0;
    }

    Matrix(int r, int c) {
        rows = r;
        cols = c;
        dimension = rows * cols;
        array = new int* [rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new int[cols];
        }
    }

    int getNum(int r, int c) {
        return array[r][c];
    }

    void setNum(int r, int c, int num) {
        array[r][c] = num;
    }

    void Input(int r, int c) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter element for index " << i + 1 << "," << j + 1 << ": ";
                cin >> array[i][j];
            }
        }
    }
    void DisplayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element at index " << i + 1 << "," << j + 1 << " is" << array[i][j] << endl;
            }
        }
    }
    void rotateOuterLayerBy1() {
        int startRow = 0;
        int endRow = rows - 1;
        int startCol = 0;
        int endCol = cols - 1;

        while (startRow < endRow && startCol < endCol) {
            int prev = array[startRow + 1][startCol];
            for (int i = startCol; i <= endCol; i++) {
                int current = array[startRow][i];
                array[startRow][i] = prev;
                prev = current;
            }
            startRow++;

            for (int i = startRow; i <= endRow; i++) {
                int current = array[i][endCol];
                array[i][endCol] = prev;
                prev = current;
            }
            endCol--;
            for (int i = endCol; i >= startCol; i--) {
                int current = array[endRow][i];
                array[endRow][i] = prev;
                prev = current;
            }
            endRow--;
            for (int i = endRow; i >= startRow; i--) {
                int current = array[i][startCol];
                array[i][startCol] = prev;
                prev = current;
            }
            startCol++;
        }
    }
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }
        delete[] array;
        array = nullptr;
    }
   
};

int main() {
    int rows, columns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;
    Matrix obj(rows, columns);
    obj.Input(rows, columns);
    obj.DisplayMatrix();
    obj.rotateOuterLayerBy1();
    obj.DisplayMatrix();

    return 0;
}
