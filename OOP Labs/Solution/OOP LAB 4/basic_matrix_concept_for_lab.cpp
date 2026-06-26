using namespace std;
#include<iostream>
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
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << "Enter element for index " << i + 1 << "," << j + 1 << endl;
				cin >> array[i][j];
			}
		}
	}
};
int main() {
	int rows, columns;
	cout << "Enter rows: " << endl;
	cin >> rows;
	cout << "Enter columns: " << endl;
	cin >> columns;
	Matrix obj(rows, columns);
	obj.Input(rows, columns);

}