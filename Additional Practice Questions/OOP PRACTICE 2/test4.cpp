u/*sing namespace std;
#include<iostream>
int main()
{
	int* arr[3];
	for (int i = 0; i < 3; i++)
		arr[i] = new int[2];
	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr[i][j] = ++k;
		}
	}
	cout << arr << "\t";
	cout << *arr << "\t";
	cout << **arr << "\t";
	cout << **(arr + 1) << "\t";

	for (int i = 0; i < 3; i++)
		delete[] arr[i];
	delete[] arr;
}*/

//#include<iostream>
//using namespace std;
//void Function(int** a, int** b)//**a means a[0] =address of ptr1 whereas ptr1 = address of first index of row 0.
//{
//	int* temp = *a;//*a means dereferencing ptr1 then address of first index of row 0 will be stored in temp.
//	*a = *b;//address of row 2 will be stored in ptr1.
//	*b = temp;//adress of row 0 will be stored in ptr3.
//}
//void main()
//{
//	int** arr = new int* [3];
//	for (int i = 0; i < 3; i++)
//		arr[i] = new int[2];
//	int k = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			arr[i][j] = ++k;
//		}
//	}
//	Function(&arr[0], &arr[2]);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 3; i++)
//		delete[] arr[i];
//	delete[] arr;
//}

//using namespace std;
//#include<iostream>
//class Rectangle {
//private:
//	int lenght;
//	int width;
//public:
//	Rectangle(int l = 0, int w = 0) {
//		cout << "Constructor Called for " << l << " X " << w << "\n";
//		lenght = l;
//		width = w;
//	}
//	~Rectangle() {
//		cout << "Destructor Called for rectangle " << lenght << "X" << width << "\n";
//	}
//	void SomeFunction(Rectangle rhs) {
//		Rectangle rect(lenght, rhs.width);
//		lenght = rhs.lenght;
//	}//Two Destructors will be executed here!! one for the RECT object...
//	//Because uska scope end hogya tha function ke sath and other will be for the object which was being passed in the function i.e rhs or r2.
//	void Print() {
//		cout << lenght << "X" << width << endl;
//	}
//};
//void main()
//{
//	Rectangle r1(5, 10);
//	Rectangle r2;
//	r1.Print();
//	r2.Print();
//	cout << "-----------------\n";
//	r1.SomeFunction(r2);
//	r1.Print();
//	r2.Print();
//}
