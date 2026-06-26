//using namespace std;
//#include<iostream>
//class small
//{
//public:
//	virtual void print()const;
//	int add()
//	{
//		return x + y;
//	}
//	small()
//	{
//		cout << "I am small" << endl;
//	}
//	small(int a, int b)
//	{
//		x = a;
//		y = b;
//		cout << "I am small's para" << endl;
//	}
//	~small()
//	{
//		cout << "I am small destructor" << endl;
//	}
//private:
//	int x = 0;
//	int y = 0;
//
//};
//void small::print() const
//{
//	cout << "small:-- " << endl << "x: " << x << ",y=" << y << endl;
//}
//class notsmall :public small
//{
//public:
//	void print()const;
//	int add();
//	notsmall()
//	{
//		cout << "I am not small" << endl;
//	}
//	notsmall(int a, int b, int c) :small(a, b)
//	{
//		
//		z = c;
//		cout << "I am not small's para" << endl;
//	}
//	~notsmall()
//	{
//		cout << "I am not small destructor" << endl;
//	}
//private:
//	int z;
//
//};
//void notsmall:: print() const
//{
//	small::print();
//	cout << "nosmall----z: " << z << endl;
//}
//int notsmall::add()
//{
//	return z + small::add();
//}
//int main()
//{
//	small* ptrsmall, * ss;
//	//ss = new small[3];
//	//delete[]ss;
//	ss = new notsmall[3];
//	
//	small objectsmall(2, 3);
//	notsmall bigobject(3, 5, 9);
//	ptrsmall = &objectsmall;
//	cout << ptrsmall->add() << endl;
//	ptrsmall->print();
//	cout << "*-*-*-*" << endl << endl;
//	ptrsmall =(notsmall*)&objectsmall;
//	cout << ptrsmall->add() << endl;
//	ptrsmall->print();
//	delete[]ss;
//	//ss = nullptr;
//
//}