//using namespace std;
//#include<iostream>
//class	XYZ
//{
//private:
//	int	x;
//public:
//	XYZ(int	y = 10) {
//		x = y;
//		cout << "XYZ()	called	for	" << x << endl;
//	}
//	void change()
//	{
//		x = 5;
//	}
//	void	Print() {
//		cout << x << endl;
//	}
//	~XYZ() {
//		cout << "~XYZ()	Called.\n";
//	}
//};
//class	ABC
//{
//	int	c;
//public:
//	XYZ	a;
//	XYZ* b;
//	ABC(int	val = 50) {
//		c = val;
//		cout << "ABC()	called	for	" << c << endl;
//		b = new	XYZ(a);
//	}
//	
//	void	Print() {
//		cout << "c	=	" << c << endl;
//		cout << "a	=	"; a.Print();
//		//b->change();
//		//a.Print();
//		if (b != nullptr)
//		{
//			cout << "b	=		";
//			b->Print();
//		}
//	}
//};
//int	main()
//{
//	ABC* x = new	ABC;
//	x->Print();
//	XYZ* ptr = &(x->a);
//	delete	x;
//	ptr->Print();
//}
////class	A {
////private:
////	int	a;
////public:
////	A(int	x = 10) {
////		a = x;
////		cout << "A()	Called.\n";
////	}
////	~A() {
////		cout << "~A()Called	for	" << a << "	.\n";
////	}
////	void	Function(A* b) {
////		cout << "--------------\n";
////	}
////};
////
////int	main() {
////	A	a;
////	//A* aptr = &a;
////	//cout << aptr << endl;
////	//aptr = new	A(5);
////	//cout
////	a.Function(&a);
////	//delete	aptr;
////	//cout << "IMran" << endl;
////}