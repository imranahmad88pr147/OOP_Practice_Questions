//using namespace std;
//#include<iostream>
//int main() {
//	int x = 10;
//	int* ptr;
//	ptr = &x;
//	ptr++;
//	int nums[50];
//		int * iptr = nums;
//		int* ptr1, * ptr2;//defination of multiple pointers at single line WITH A SINGLE INT KEYWORD!!!
//		nums[0] = 1;
//		cout << *iptr << endl;
//		cout << *nums << endl;
//		cout << nums+1;
//
//}
//using namespace std;
//#include<iostream>
//
//int* function(int*& arr, int& size)
//{
//	int* a = arr;
//	int* temp = new int[size];
//	arr = temp;
//	for (int i = 0; i < size; i++) {
//		*(arr + i) = i + 3 + *a;
//		a[i] *= 3;
//	}
//	return a;
//}
//int main()
//{
//	int* ptr = nullptr;
//	int size = 5;
//	ptr = new int[size];
//	for (int i = 0; i < size; i++)
//		ptr[i] = i * 5;
//	int* x = function(ptr, size);
//	for (int i = 0; i < size; i++)
//		cout << ptr[i] << ",";
//	cout << endl;
//	for (int i = 0; i < size; i++)
//		cout << x[i] << ",";
//	delete[] ptr;
//	delete[] x;
//	
//}