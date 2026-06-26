//using namespace std;
//#include<iostream>
//class A
//{
//	int* a;
//	int* b;
//public:
//	A()
//	{
//		a = nullptr;
//		b = nullptr;
//
//	}
//	A(int v1, int v2)
//	{
//		a = new int(v1);
//		b = new int(v2);
//		
//	}
//	void change();
//	void display();
//
//};
//void A::display()
//{
//	cout << "First Value: " <<* a << endl;
//	cout << "Second Value: " <<* b << endl;
//}
//void A::change()
//{
//	*a = 5;
//	*b = 6;
//}
//int main()
//{
//	A obj1(1, 2);
//	A obj2 = obj1;
//	//obj2.display();
//	obj2.change();
//	obj1.display();
//	
//
//}
//using namespace std;
//#include<iostream>
//int main() {
//	const int size = 6;
//	int arr[size] = { 60, 50, 40, 30, 20, 10 };
//	int* s = arr;
//	int i = 1;
//	while (++i < size) {
//		//cout << i << endl;
//		cout << (*s)++;
//	}
//}
//int main()
//{
//	const int size = 6;
//	int arr[size] = { 10, 20, 30, 40, 50, 60 };
//	int* s = arr;
//	int* e = arr + size - 1;
//	while (s < e) {
//		cout << (*s)++;
//		e--;
//	}
//	cout << *e;
//}