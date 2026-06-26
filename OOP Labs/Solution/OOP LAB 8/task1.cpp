//using namespace std;
//#include<iostream>
//class DistanceConverter;
//class Distance
//{
//	float meters;
//public:
//	Distance(float m)
//	{
//		meters = m;
//	}
//	friend void ConvertToFeet(Distance& obj);
//	friend class DistanceConverter;
//	~Distance()
//	{
//
//	}
//	void SetMeters(float m)
//	{
//		meters = m;
//	}
//	float getMeters()
//	{
//		return meters;
//    }
//
//	
//};
//void ConvertToFeet(Distance &  obj)
//{
//	obj.meters = obj.meters * 3.28084;
//}
//
//class DistanceConverter
//{
//public:
//	void displayfeet(Distance distance)
//	{
//		cout << "Distance in Feets is: " << distance.meters << endl;
//	}
//};
//int main()
//{
//	float m;
//	cout << "Enter Distance in meters: " << endl;
//	cin >> m;
//	if (m <= 0)
//	{
//		cout << "Invalid Input";
//		return 0;
//	}
//	Distance obj(m);
//	ConvertToFeet(obj);
//	DistanceConverter obj1;
//	obj1.displayfeet(obj);
//}