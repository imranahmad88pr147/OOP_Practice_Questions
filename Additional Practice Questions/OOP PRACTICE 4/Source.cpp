//using namespace std;
//#include<iostream>
//
//class Tune
//{
//protected:
//	int vol;
//	char type;
//public:
//	Tune(int v) { vol = v; }
//	virtual void ring() = 0;
//	void test() {
//		//cout << "ok";
//		for (int i = 0; i < vol; i++)
//
//			cout << type;
//	}
//	~Tune() { cout << vol << "D"; }
//};
//class TuneA :public Tune
//{
//public:
//	TuneA(int v, char t) :Tune(v) {
//		type = t;
//	}
//	void ring() {
//		for (int i = 0; i < vol; i++)
//			cout << "*";
//	}
//	~TuneA() { cout << type << "D1"; }
//};
//class TuneB :public Tune
//{
//public:
//	TuneB(int v, char t) :Tune(v) { type = t; }
//	void test() {
//		Tune::test();
//		for (int i = 0; i < vol; i++)
//			cout << "#";
//	}
//	~TuneB() { cout << vol << "D2"; }
//};
//class Mob
//{
//	Tune* p;
//public:
//	Mob(TuneA& obj) { p = &obj; }
//	Mob(TuneB& obj) { p = &obj; }
//	void ring() { p->ring(); }
//	void test() { p->test(); }
//};
//		int main()
//	{
//		TuneA a(4, 'A'); //TuneB b(3, 'B');
//			Mob m1(a); //Mob m2(b);
//		m1.ring(); //m2.ring();
//		m1.test(); //m2.test();
//	}