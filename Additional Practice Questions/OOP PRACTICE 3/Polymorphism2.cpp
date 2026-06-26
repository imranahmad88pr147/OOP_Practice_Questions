//using namespace std;
//#include<iostream>
//class M {
//public:
//	 M()
//	{
//		cout << "OKK" << endl;
//	}
//	virtual void MyMemory() { cout << "I forget "; }
//	void Disk() {
//		cout << "Space ";
//	}
//	void Erased() { cout << "For good "; };
//	void ThisExam() { Erased(); MyMemory(); };
//virtual	 ~M() { cout << "M" << endl; }
//};
//class N : public M {
//public:
//	N()
//	{
//		cout << "imu";
//	}
//	void MyMemory() {
//		cout << "Gone ";
//	}
//
//	void Disk() {
//		cout << "Slipped ";
//	}
//	void virtual Erased() { cout << "Rubbed out "; }
//	~N()
//	{
//		cout << "N" << endl;
//	}
//};
//						
//	int main()
//	{
//								M* pointer;
//								M* m1 = new N;
//								//delete m1;
//								m1->MyMemory();
//							m1->Disk();
//							m1->ThisExam();
//							cout << endl; 
//								M m2 = *(new N);
//							m2.MyMemory();
//							m2.Disk();
//							m2.ThisExam();
//	}