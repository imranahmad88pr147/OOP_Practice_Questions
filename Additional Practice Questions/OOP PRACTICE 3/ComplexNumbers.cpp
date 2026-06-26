//using namespace std;
//#include<iostream>
//class ComplexNumbers {
//	float* real;
//	float* img;
//public:
//	ComplexNumbers()
//	{
//		real = nullptr;
//		img = nullptr;
//	}
//	ComplexNumbers(float r, float i)
//	{
//		real = new float;
//		img = new float;
//		*real = r;
//		*img = i;
//	}
//	friend void Display(ComplexNumbers obj);
//	/*void Display()
//	{
//		cout << "Real Part is: " << *real << endl;
//		cout << "Imaginary Part is: " << *img <<"i"<< endl;
//		if(*img>0)
//		cout << *real << "+" << *img <<"i"<< endl;
//	}*/
//	ComplexNumbers operator+(const ComplexNumbers& obj)
//	{
//		ComplexNumbers temp;
//		temp.real = new float;
//	    temp.img=new float;
//		*temp.real = *real + *obj.real;
//		*temp.img = *img + *obj.img;
//		return temp;
//	}
//	ComplexNumbers operator*(const ComplexNumbers& obj) {
//		ComplexNumbers temp;
//		temp.real = new float;
//		temp.img = new float;
//		*temp.real = (*real * (*obj.real)) - (*img * (*obj.img));
//		*temp.img = (*real * (*obj.img)) + (*img * (*obj.real));
//		return temp;
//	}
//	ComplexNumbers(const ComplexNumbers& obj)
//	{ 
//		real = new float;
//		img = new float;
//		*real = *obj.real;
//		*img = *obj.img;
//		
//	}
//	~ComplexNumbers()
//	{
//		delete real;
//		delete img;
//	}
//
//
//};
//void Display(ComplexNumbers obj)
//{
//	cout << "Real Part is: " << *(obj.real) << endl;
//	cout << "Imaginary Part is: " << *(obj.img) << "i" << endl;
//	if (*(obj.img) > 0)
//		cout << *(obj.real) << "+" << *(obj.img) << "i" << endl;
//}
//int main() {
//	cout << "Enter Complex Number: " << endl;
//	float real, img;
//	cout << "Enter Real Part: " << endl;
//	cin >> real;
//	cout << "Enter Imaginary Part: " << endl;
//	cin >> img;
//	ComplexNumbers obj1(real, img);
//	ComplexNumbers obj2(real, img);
//	Display(obj1);
//	ComplexNumbers obj3= obj1 * obj2;
//	Display(obj3);
//}