//using namespace std;
//#include<iostream>
//int* CompressArray(int* originalArr, int& size) {
//	int compressSize;
//	int* tempArray = new int[size];
//	
//	int j = 0;
//	for (int i = 0; i < size-1; i++) {
//		if (originalArr[i] != originalArr[i+1])
//			
//			tempArray[j++] = originalArr[i];
//		
//	}
//
//	tempArray[j++] = originalArr[size - 1];
//	compressSize = j;
//	size = j;
//	
//	int* newArray = new int[compressSize];
//	for (int i = 0; i < j; i++)
//		newArray[i] == tempArray[i];
//	/*for (int i = 0; i < compressSize; i++) {
//		cout << "Element for index: " << i + 1 << " is " << newArray[i] << endl;
//	}*/
//	return newArray;
//	delete[]newArray;
//	newArray = nullptr;
//	
//}
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
//int* InputArray(int& size) {
//	cout << "Enter  the size of array: " << endl;
//	cin >> size;
//
//    int*  array = new int[size];
//	for (int i = 0; i < size; i++) {
//		cout << "Enter element for index: " << i + 1 << endl;
//		cin >> array[i];
//	}
//	return array;
//	delete[]array;
//	array = nullptr;
//
//	
//}
//void OutputArray(int* myArray, const int& size) {
//		for (int i = 0; i < size; i++) {
//			cout << "Element at index: " << i + 1 << " is " << myArray[i] << endl;
//	
//		}
//	}
//int main() {
//	int size=0;
//	int* array = InputArray(size);
//	
//	SortingOfArray(array, size);
//	CompressArray(array, size);
//	OutputArray(array, size);
//	/*for (int i = 0; i < size; i++) {
//		cout << "element for index: " << i + 1 << " is " << array[i] << endl;
//	}*/
//
//	
//	
//	
//	
//}