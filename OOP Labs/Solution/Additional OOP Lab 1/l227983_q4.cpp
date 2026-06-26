//#include <iostream>
//using namespace std;
//int main() {
//    bool flag = true;
//    int size = 5;
//    int input;
//    int* array = new int[size];
//    int count = 0;
//
//    while (flag) {
//        for (int i = 0; i < size; i++) {
//          cout << "Enter an integer: ";
//          cin >> input;
//            if (input == -1) {
//                flag = false;
//                break;
//            }
//            array[count++] = input;
//        }
//
//        if (count == size) {
//            int* array2 = new int[size * 2];
//            for (int j = 0; j < size; j++) {
//                array2[j] = array[j];
//            }
//            delete[] array;
//            array = array2;
//            size = size * 2;
//        }
//    }
//
//      cout << "Numbers in reverse order: ";
//    for (int i = count - 1; i >= 0; i--) {
//       cout << array[i] << ",";
//    }
//
//    delete[] array;
//
//    return 0;
//}
