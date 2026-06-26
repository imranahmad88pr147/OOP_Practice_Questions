////using namespace std;
////#include<iostream>
////class A {
////public:
////	virtual void print();
////	virtual ~A() {
////		cout << "Destructor of A" << endl;
////	}
////};
////void A::print() {
////	cout << "----A----" << endl;
////}
////class B :public A {
////public:
////	void print();
////	~B() {
////		cout << "Destructor of B" << endl;
////	}
////};
////void B::print() {
////	cout << "----B----" << endl;
////}
////class D :public B {
////public:
////	virtual void print() {
////		cout << "----D----" <<
////			endl;
////	}
////	~D() {
////		cout << "Destructor of D" << endl;
////	}
////};
////void main()
////{
////	{ A a;
////	D Z;
////	A* p1 = &a;
////	A* p3 = new D;
////	B* p4 = &Z;
////	p1->print();
////	p3->print();
////	p4->print();
////	delete p3;
////	}
////	
////}
//using namespace std;
//#include<iostream>
//class Vehicle {
//public:
//	Vehicle() {
//		cout << "Vehicle() called.\n";
//	}
//	~Vehicle() {
//		cout << "~Vehicle() called.\n";
//	}
//	virtual void Print() {
//		cout << "Test\n";
//	}
//};
//
//class MotorCycle : public Vehicle
//{
//public:
//	MotorCycle() {
//		cout << "MotorCycle() called.\n";
//	}
//	~MotorCycle() {
//		cout << "~MotorCycle() called.\n";
//	}
//};
//class Car : public Vehicle {
//public:
//	Car() {
//		cout << "Car() called.\n";
//	}
//	~Car() {
//		cout << "~Car() called.\n";
//	}
//	virtual void Print() {
//		cout << "Check\n";
//	}
//};
//
//int main() {
//	Vehicle* vehicles[3];
//	vehicles[0] = new MotorCycle;
//	vehicles[1] = new Car;
//	vehicles[2] = new Vehicle;
//	for (int i = 0; i < 3; i++)
//		vehicles[i]->Print();
//	for (int i = 0; i < 3; i++)
//		delete vehicles[i];
//}