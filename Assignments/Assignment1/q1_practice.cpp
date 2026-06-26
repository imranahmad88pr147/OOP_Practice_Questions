//#include <iostream>
//using namespace std;
//
//class ragged {
//private:
//    int** arr;
//    int row;
//    int col;
//    int** rag_arr;
//    int row2;
//    int* c;
//
//public:
//    ragged() {
//        arr = nullptr;
//        row = 0;
//        col = 0;
//        rag_arr = nullptr;
//        row2 = 0;
//        c = nullptr;
//    }
//    ragged(int r1, int c1)
//    {
//        /* row = r1;
//         col = c1;
//         arr = new int* [row];
//         for (int i = 0; i < row; i++) {
//             arr[i] = new int[col];
//         }
//         rag_arr = new int*[row];
//         c = new int[row];*/
//        row = r1;
//        col = c1;
//        arr = new int* [row];
//        for (int i = 0; i < row; i++) {
//            arr[i] = new int[col];
//        }
//        rag_arr = new int* [row];
//        c = new int[row]; // Allocate memory for c
//        for (int i = 0; i < row; i++) {
//            rag_arr[i] = nullptr; // Initialize rag_arr to nullptr
//            c[i] = 0; // Initialize c to 0
//        }
//    }
//    ~ragged() {
//        for (int i = 0; i < row; i++) {
//            delete[] arr[i];
//            arr = nullptr;
//        }
//        delete[] arr;
//        arr = nullptr;
//        for (int i = 0; i < row; i++) {
//            delete[] rag_arr[i];
//            rag_arr = nullptr;
//        }
//        delete[] rag_arr;
//        rag_arr = nullptr;
//        delete[]c;
//    }
//
//    void setrow(int r) {
//        row = r;
//    }
//
//    int getrow() {
//        return row;
//    }
//
//    void setcol(int c) {
//        col = c;
//    }
//
//    int getcol() {
//        return col;
//    }
//
//    void Input() {
//        cout << "\nEnter the entries of the 2D matrix\n";
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < col; j++) {
//                cout << "Enter value at (" << i << "," << j << ") : ";
//                cin >> arr[i][j];
//            }
//        }
//    }
//    void removezero()
//    {
//       // int count = 0;
//        for (int i = 0; i < row; i++) {
//            int count = 0;
//            for (int j = 0; j < col; j++) {
//                if (arr[i][j] != 0)
//                {
//                    count++;
//                }
//            }
//            rag_arr[i] = new int[count];
//            c[i] = count;
//
//            int col2 = 0;
//
//            for (int j = 0; j < col; j++) {
//                if (arr[i][j] != 0)
//                {
//                    rag_arr[i][col2] = arr[i][j];
//                    col2++;
//                }
//            }
//        }
//
//        row2 = row;
//    }
//    void Output() {
//        cout << "\nThe 2D matrix:\n";
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < c[i]; j++) {
//               // cout << c[i] << "hi";
//                cout << rag_arr[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//int main() {
//    int r, c;
//    cout << "Enter the rows: ";
//    cin >> r;
//    cout << "Enter the columns: ";
//    cin >> c;
//    ragged mat1(r, c);
//    mat1.Input();
//
//    mat1.removezero();
//    cout << "\nThe 2D matrix after removing the zeroes:\n";
//    mat1.Output();
//    return 0;
//}