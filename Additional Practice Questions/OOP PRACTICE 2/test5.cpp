//using namespace std;
//#include<iostream>
//class ComplexNumber {
//	int real;
//	int imaginary;
//public:
//	ComplexNumber() {
//		real = 0;
//		imaginary = 0;
//	}
//	ComplexNumber(int r, int i) {
//		real = r;
//		imaginary = i;
//	}
//	void Output() {
//		cout << "Real Part: " << real << endl;
//		cout << "Imaginary Part: " << imaginary <<"i"<< endl;
//	}
//	bool IsEqual(ComplexNumber obj) {
//		if (real == obj.real && imaginary == obj.imaginary) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	//void Output() {
//	//	//cout << "Real Part: " << real << endl;
//	//	cout << "Imaginary Part: " << imaginary << "i" << endl;
//	//}
//	void Input(int r, int i) {
//		real = r;
//		imaginary = i;
//	}
//	void Input(float r, float i) {
//		real = r;
//		imaginary = i;
//	}
//
//	
//	ComplexNumber ChangeReal(int n) {
//		this->real = n;
//		return *this;
//	}
//	
//};
//int main() {
//	ComplexNumber obj1(2, 3);
//	ComplexNumber obj2(2, 4);
//	bool choice;
//	choice=obj1.IsEqual(obj2);
//	if (choice == true)
//		cout << "Complex Numbers are equal!!!" << endl;
//	else {
//		cout<<"Complex Numbers are not equal!!" << endl;
//	}
//	obj1.Output();
//	obj1.ChangeReal(9);
//	obj1.Output();
//
//
//}