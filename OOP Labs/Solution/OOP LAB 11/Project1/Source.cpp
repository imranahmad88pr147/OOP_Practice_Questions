//using namespace std;
//#include<iostream>
//template<class T,class U>
//T GetMax(T a, U b)
//{
//	if (a > b)
//		//cout << a << " is Greatest" << endl;
//		return a;
//	else if (a == b)
//		cout << "Both Numbers are Equal" << endl;
//	else
//		return b;
//}
//template<class T,class U>
//T GetMin(T a, U b)
//{
//	if (a < b)
//		return a;
//	else if (a == b)
//		cout << "Both Numbers are Equal" << endl;
//	else
//		return b;
//}
//int main()
//{
//	/*int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax(i, j);
//	n = GetMin(l, m);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;*/
//	char i = 'Z';
//	int j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax(i, m);
//	n = GetMin(j, l);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}
////Exercise 1 c:
////We are not getting error after removing <int> and <long> 
////Because GetMax and GetMin are functions not classes whereas classes must require data type.
////Exercise 1 d:
////Output is 90 and 6.
////Exercise 1 e:
////We are not getting error because of the same reason as told above.
//
////Class Templates
////Exercise 2
////template<class T>
////
////class Pair
////{
////	
////	T array[2];
////public:
////	
////	Pair(T a, T b)
////	{
////		array[0] = a;
////		array[1] = b;
////	}
////	T GetMax()
////{
////	if (array[0] > array[1])
////		
////		return array[0];
////	else if (array[0] == array[1])
////		cout << "Both Numbers are Equal" << endl;
////	else
////		return array[1];
////}
////	T GetMin();
////
////
////
////	
////};
////template<class T>
////T Pair<T>:: GetMin()
////{
////	if (array[0] < array[1])
////		return array[0];
////	else if (array[0] == array[1])
////		cout << "Both Numbers are Equal" << endl;
////	else
////		return array[1];
////}
////int main()
////{
////	Pair <double> myobject(1.012, 1.01234);
////	cout << myobject.GetMax();
////	return 0;
////}
////Exercise2 Ouput: 1.01234
//
////Exercise3
////template <class T>
////class Container
////{
////	T data;
////public:
////	Container(T num)
////	{
////		data = num;
////	}
////	T increase() {
////		data++;
////		return data;
////	}
////};
////template<>
////class Container<char>
////{
////	char data;
////public:
////	Container(char value)
////	{
////		data = value;
////	}
////	char uppercase()
////	{
////		return data - 32;
////	}
////	
////};
////int main()
////{
////	Container<int> myint(7);
////	Container<char> mychar('j');
////	cout << myint.increase() << endl;
////	cout << mychar.uppercase() << endl;
////	return 0;
////}
////Exercise3 Output: 8 and J.
//
////Exercise4 
//
//template <class T, int N>
//class Sequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//};
//template <class T, int N>
//void Sequence<T, N>::setmember(int x, T value)
//{
//	memblock[x] = value;
//}
//template <class T, int N>
//T Sequence<T, N>::getmember(int x)
//{
//	return memblock[x];
//}
////int main()
////{
////	Sequence <int, 5> myints;
////	Sequence <double, 5> myfloats;
////	myints.setmember(0, 100);
////	myfloats.setmember(3, 3.1416);
////	cout << myints.getmember(0) << '\n';
////	cout << myfloats.getmember(3) << '\n';
////	return 0;
////}
////Exercise4 Output: 100 and 3.1416
//
////Exercise5
//template<class T>
//
//class Pair
//{
//
//	T array[2];
//public:
//	Pair()
//	{
//		array[0] = 0;
//		array[1] = 0;
//	}
//		Pair(T a, T b)
//	{
//		array[0] = a;
//		array[1] = b;
//	}
//
//	template <class identifier> friend ostream& operator << (ostream& out, const
//		Pair<identifier>& p)
//	{
//		out << "Value 1= " << p.array[0] << endl;
//		out << "Value 2= " << p.array[1];
//		return out;
//	}
//};
//	int main()
//	{
//		Pair <double> y(2.23, 3.45);
//		Sequence <Pair<double>, 5> myPairs;
//		myPairs.setmember(0, y);
//		cout << myPairs.getmember(0) << '\n';
//	}
//	//Exercise 5 Ouput:Value 1= 2.23
//	//Value 2 = 3.45
//	
