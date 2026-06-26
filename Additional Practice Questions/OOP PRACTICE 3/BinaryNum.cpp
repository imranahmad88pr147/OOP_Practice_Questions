//using namespace std;
//#include<iostream>
//class BinaryNum
//{
//	int* BinNum;
//	int NoOfBits;
//public:
//	BinaryNum()
//	{
//		BinNum = nullptr;
//		NoOfBits = 0;
//	}
//	BinaryNum(string b)
//	{
//		NoOfBits = b.length();
//		BinNum = new int[NoOfBits];
//		for (int i = 0; i < NoOfBits; i++)
//		{
//			BinNum[i] = b[i] - 48;
//		}
//	}
//	void Print()
//	{
//		if (BinNum != 0)
//		{
//			for (int i = 0; i < NoOfBits; i++)
//				cout << BinNum[i];
//		}
//		cout << endl;
//	}
//	BinaryNum operator+(const BinaryNum& obj)
//	{
//		BinaryNum temp;
//
//
//	}
//
//};
//int main()
//{
//	BinaryNum b1; //noOfBits = 0, binNum is NULL
//	BinaryNum b2("101"); //noOfBits = 3, binNum is {1,0,1}
//	BinaryNum b3("1001"); //noOfBits = 4, binNum is {1,0,0,1}
//	cout << "b1 = "; b1.Print(); //Prints Nothing
//	cout << "b2 = "; b2.Print(); //Prints 101
//	cout << "b3 = "; b3.Print(); //Prints 1001
//	b1 = b2 + b3;
	//cout << "b1 = "; b1.Print(); //Prints 1110
	//cout << "b1[0] = " << b1[0] << endl; //Prints 1 (0th bit in b1)
	//cout << "b1[3] = " << b1[3] << endl; //Prints 0 (3rd bit in b1)
	//(b3++).Print(); //Prints 1001
	//b3.Print(); //Prints 1010
	//b1 = "111" + b2;
	//b1.Print(); //Prints 1100
//}
