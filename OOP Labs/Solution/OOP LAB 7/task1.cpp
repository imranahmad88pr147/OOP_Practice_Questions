//using namespace std;
//#include<iostream>
//#include<string>
//class ABC {
//	string Colour;
//	int CubicCapacity;
//	int NoOfSeats;
//	int ManufacturingYear;
//	int EngineNo;
//	int FrameNo;
//	string Ownername;
//public:
//	ABC()
//	{
//		Colour = "";
//		NoOfSeats = 0;
//		ManufacturingYear = 0;
//		EngineNo = 0;
//		FrameNo = 0;
//		Ownername = "";
//		CubicCapacity = 0;
//	}
//	ABC(string c, int s, int y, int e, int f, string n , int cc)
//	{
//		Colour = c;
//		NoOfSeats = s;
//		ManufacturingYear = y;
//		EngineNo = e;
//		FrameNo = f;
//		Ownername = n;
//		CubicCapacity = cc;
//
//	}
//	ABC(const ABC& obj)
//	{
//		Colour = obj.Colour;
//		NoOfSeats = obj.NoOfSeats;
//		CubicCapacity = obj.CubicCapacity;
//	}
//	void SetManufacturingYear(int y)
//	{
//		ManufacturingYear = y;
//	}
//	void SetEngineNo(int e)
//	{
//		EngineNo = e;
//	}
//	void SetFrameNo(int f)
//	{
//		FrameNo = f;
//	}
//	void SetOwnerName(string n)
//	{
//		Ownername = n;
//	}
//	string getColour()
//	{
//		return Colour;
//
//	}
//	int getSeats()
//	{
//		return NoOfSeats;
//	}
//	int getManufacturingYear()
//	{
//		return ManufacturingYear;
//	}
//	int getEngineNo()
//	{
//		return EngineNo;
//	}
//	int getFrameNo()
//	{
//		return FrameNo;
//	}
//	int getCubicCapacity()
//	{
//		return CubicCapacity;
//	}
//	string getOwnerName()
//	{
//		return Ownername;
//	}
//
//
//};
//int main()
//{   
//	int s = 0, y = 0, e = 0, f = 0;
//    int cc = 0;
//	string n="", c="";
//	cout << "Enter Colour of Car: " << endl;
//	getline(cin, c);
//	cout << "Enter Owner Name: " << endl;
//	getline(cin, n);
//	cout << "Enter No. of Seats: " << endl;
//	cin >> s;
//	cout << "Enter Manufacturing Year: " << endl;
//	cin >> y;
//	cout << "Enter Engine No. :" << endl;
//	cin >> e;
//	cout << "Enter Frame No. :" << endl;
//	cin >> f;
//	cout << "Enter Cubic Capacity :" << endl;
//	cin >> cc;
//	ABC obj1(c, s, y, e, f, n, cc);
//	ABC obj2 = obj1;
//	cout << "Enter Engine No. :" << endl;
//	cin >> e;
//	cout << "Enter Frame No. :" << endl;
//	cin >> f;
//	cout << "Enter Manufacturing Year: " << endl;
//	cin >> y;
//	cout << "Enter Owner Name: " << endl;
//	getline(cin, n);
//	obj2.SetEngineNo(e);
//	obj2.SetFrameNo(f);
//	obj2.SetManufacturingYear(y);
//	obj2.SetOwnerName(n);
//	cout << obj2.getColour() << " " << obj1.getColour() << endl;
//	cout << obj2.getEngineNo() << " " << obj1.getEngineNo() << endl;
//
//
//
//	
//
//}