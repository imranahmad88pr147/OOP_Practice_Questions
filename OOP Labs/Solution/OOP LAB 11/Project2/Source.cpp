using namespace std;
#include<iostream>

template <class T, int N>
class Sequence {
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};


template<class T>

class Pair
{

	T array[2];
public:
	Pair()
	{
		array[0] = 0;
		array[1] = 0;
	}
	Pair(T a, T b)
	{
		array[0] = a;
		array[1] = b;
	}

	template <class identifier> friend ostream& operator << (ostream& out, const
		Pair<identifier>& p)
	{
		out << "Value 1= " << p.array[0] << endl;
		out << "Value 2= " << p.array[1];
		return out;
	}
};
int main()
{
	Pair <double> y(2.23, 3.45);
	Sequence <Pair<double>, 5> myPairs;
	myPairs.setmember(0, y);
	cout << myPairs.getmember(0) << '\n';
}