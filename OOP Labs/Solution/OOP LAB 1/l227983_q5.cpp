//using namespace std;
//#include<iostream>
//int* SortingOfArray(int* originalArr, int size) {
//	int i, j, min_in;
//	for (i = 0; i < size; i++)
//	{
//		min_in = i;
//		for (j = i + 1; j < size; j++)
//			if (originalArr[j] < originalArr[min_in])
//				min_in = j;
//		swap(originalArr[i], originalArr[min_in]);
//	}
//	return originalArr;
//	delete[] originalArr;
//	originalArr = nullptr;
//
//}
//void IntersectionOfArrays(int* array1, int* array2,int& size1, int size2) {
//	int size3;;
//	size3 = size1 + size2;
//	int* array3 = new int[size3];
//	int k = 0;
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			if (array1[i] == array2[j]) {
//				array3[k] = array1[i];
//				k++;
//			}
//
//		}
//	}
//	
//	for (int i = 0; i < k; i++) {
//		cout << "Common  elements are: " << array3[i] << endl;
//	}
//	
//	
//}
//
//int main() {
//	int size1, size2, size4;
//	cout << "Enter size of array 1: " << endl;
//	cin >> size1;
//	cout << "Enter size of array 2: " << endl;
//	cin >> size2;
//	
//	int* array1 = new int[size1];
//	int* array2 = new int[size2];
//	for (int i = 0; i < size1; i++) {
//		cout << "Enter element for index: " << i + 1 << endl;
//		cin >> array1[i];
//	}
//	for (int i = 0; i < size2; i++) {
//		cout << "Enter element for index: " << i + 1 << endl;
//		cin >> array2[i];
//	}
//	SortingOfArray(array1, size1);
//	SortingOfArray(array2, size2);
//	IntersectionOfArrays(array1, array2, size1, size2);
//}