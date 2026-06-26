//using namespace std;
//#include<iostream>
//class A
//{
//	int a;
//	int b;
//public:
//	A()
//	{
//		a = 0;
//		b = 0;
//	}
//	A operator++()
//	{
//		++a;
//		++b;
//		return *this;
//	}
//	A operator++(int)
//	{
//		A obj = *this;
//		a++;
//		b++;
//		return obj;
//	}
//	friend ostream& operator<<(ostream& output, const A& obj)
//	{
//		output << "Value of a: " << obj.a << endl;
//		output << "Value of b: " << obj.b << endl;
//		return output;
//	}
//
//};
//int main()
//{
//	A obj;
//	cout << obj++ << endl;
//	cout << obj << endl;
//	cout << ++obj << endl;
//
//}