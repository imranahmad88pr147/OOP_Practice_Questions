using namespace std;
#include<iostream>
class Complex
{
	int real;
	int imaginary;
public:
	Complex()
	{
		real = 0;
		imaginary = 0;
	}
	Complex(int r, int i)
	{
		real = r;
		imaginary = i;
	}
	Complex(const Complex& obj)
	{
		real = obj.real;
		imaginary = obj.imaginary;
	}
	friend istream& operator >>(istream& input,  Complex& obj)
	{   
		cout << "Enter Real Part: ";
		input >> obj.real;
		cout << "Enter Imaginary Part: ";
		input>> obj.imaginary;
		//cout << endl;
		//input >> obj.imaginary;
		return input;
	}
	friend ostream& operator<<(ostream& output, Complex& obj)
	{
		if (obj.real == 0 && obj.imaginary == 0)
			output << obj.real << endl;
		if (obj.imaginary > 0)
			output << obj.real << " + " << obj.imaginary << "i" << endl;
		if (obj.imaginary < 0)
			output << obj.real<<"  " << obj.imaginary << "i" << endl;
		
		//output << obj.real << obj.imaginary;
		return output;
	}
	bool operator==(const Complex& obj)
	{   
		if (real == obj.real && imaginary == obj.imaginary)
			return true;
		else {
			return false;
		}
	}
	bool operator!=(const Complex& obj)
	{
		if (real != obj.real && imaginary != obj.imaginary)
			return true;
		else return false;
	}
	Complex operator-(const Complex& obj)
	{
		Complex temp;
		temp.real = real-obj.real;
		temp.imaginary = imaginary - obj.imaginary;
		return temp;
	}
	~Complex()
	{
		// There is no dynamic memory used in this class.So, the destructor is empty;
	}
};
int main()
{
	Complex C1;
	Complex C2(5, 6);
	Complex C3;
	cout << "Input a complex number" << endl;
	cin >> C3;
	cout << C1 << C2 << C3;
	if (C1 == C2)
		cout << "C1 == C2" << endl;
	else
		cout << "C1 != C2" << endl;
	if (C1 != C3)
		cout << "C1 != C3" << endl;
	else
		cout << "C1==C3" << endl;
	Complex C4 = C2 - C3;
	cout << C4;
	return 0;
}