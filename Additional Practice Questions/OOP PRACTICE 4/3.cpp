using namespace std;
#include<iostream>
//class Rectangle
//{
//	double len;
//	double wid;
//public:
//	Rectangle(double len, double wid)
//	{
//		this->len = len;
//		this->wid = wid;
//		cout << "Rectangle's Constructor" << endl;
//	}
//	double perimeter()
//	{
//		return 2 * (len + wid);
//	}
//	double area()
//	{
//		return len * wid;
//	}
//	virtual ~Rectangle()
//	{
//		cout << "Rectangle's Destructor" << endl;
//	}
//
//};
//class Box : public Rectangle
//{
//	double height;
//public:
//	Box(double len, double wid, double height) :Rectangle(len, wid)
//	{
//		this->height = height;
//		cout << "Box3D's Constructor" << endl;
//	}
//	double volume()
//	{
//		return height * area();
//	}
//	double area()
//	{
//		return 2 * Rectangle::area() + height * perimeter();
//	}
//	~Box()
//	{
//		cout << "Box3D Destructor" << endl;
//	}
//};
//int main()
//{
//	Box boxObj(1, 2, 3);
//	Box* boxPtr = &boxObj;
//	Rectangle rectObj(1, 2);
//	Rectangle* rectPtr = &rectObj;
//	Rectangle* rectPtr2 = &boxObj;
//	Rectangle* bx2 = dynamic_cast<Box*>(rectPtr2);
//	cout << bx2->area() << "==" << boxObj.area() << endl << endl;
//	return 0;
//
//}
//int main()
//{
//	
//		char name[] = "Abdur Rehman";
//		char*  R = &name[6];
// 
//		
//		//cout << name << endl;
//		char* d = &name[2];
//		//cout << d;
//		cout << *(++R) << endl;
//		cout << *R << endl;
//		cout << ++(*R) << endl;
//		cout << *(++d) << endl;
//		cout << ++(*d) << endl;
//	
//}