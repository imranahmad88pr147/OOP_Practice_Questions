//using namespace std;
//#include<iostream>
//class One
//{
//	int x;
//protected:
//	int y;
//public:
//	int z;
//	One(int a = 0, int b = 1, int z = 2)
//	{
//		x = a;
//		y = b;
//		this->z = z;
//		cout << "Inside One" << endl;
//	}
//	void display()
//	{
//		cout << "Inside One's display" << endl;
//	}
//	void func()
//	{
//		cout << "Inside One's func" << endl;
//	}
//	~One()
//	{
//		cout << "One's destructor" << endl;
//	}
//
//};
//class Two:public One
//{
//	int i;
//public:
//	Two()
//	{
//		i = 0;
//	}
//	Two(int n = 0) :One(n, 13)
//	{
//		cout << "Inside Two" << endl;
//		cout << y << endl;
//		cout << z << endl;
//	} 
//	void display()
//	{
//		cout << "Inside Two's display" << endl;
//	}
//
//	~Two()
//	{
//		cout << "Two's destructor" << endl;
//	}
//};
//int main()
//{
//	One o1(5, 4, 7);
//	Two t1(18);
//	t1.display();//child's display
//	o1.display();//parent's display
//	
//}
//
