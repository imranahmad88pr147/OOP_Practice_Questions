//#include <iostream>
//using namespace std;
//
//int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3) 
//{
//    int* tempArray = new int[size1];
//
//    int k = 0;
//    for (int i = 0; i < size1; i++) {
//        for (int j = 0; j < size2; j++) {
//            if (setA[i] == setB[j]) {
//                tempArray[k] = setA[i];
//                k++;
//                break;
//            }
//        }
//    }
//    int* intersectionArray = new int[k];
//    for (int i = 0; i < k; i++) {
//        intersectionArray[i] = tempArray[i];
//    }
//    size3 = k;
//    delete[] tempArray;
//
//    return intersectionArray;
//}
//
//int main() {
//    int size1, size2, size3;
//
//      cout << "Enter size of array A: ";
//      cin >> size1;
//
//    int* setA = new int[size1];
//      cout << "Enter " << size1 << " elements for array A: ";
//    for (int i = 0; i < size1; i++) {
//          cin >> setA[i];
//    }
//
//      cout << "Enter size of array B: ";
//      cin >> size2;
//
//    int* setB = new int[size2];
//      cout << "Enter " << size2 << " elements for array B: ";
//    for (int i = 0; i < size2; i++) {
//          cin >> setB[i];
//    }
//    int* intersection = Intersection(setA, size1, setB, size2, size3);
//
//      cout << "A = {";
//    for (int i = 0; i < size1; i++) {
//          cout << setA[i];
//        if (i < size1 - 1) {
//              cout << ", ";
//        }
//    }
//      cout << "}" <<   endl;
//
//      cout << "B = {";
//    for (int i = 0; i < size2; i++) {
//          cout << setB[i];
//        if (i < size2 - 1) {
//              cout << ", ";
//        }
//    }
//      cout << "}" <<   endl;
//      cout << "A Intersection B = {";
//    for (int i = 0; i < size3; i++) {
//          cout << intersection[i];
//        if (i < size3 - 1) {
//              cout << ", ";
//        }
//    }
//      cout << "}" <<   endl;
//    delete[] setA;
//    delete[] setB;
//    delete[] intersection;
//
//    return 0;
//}
