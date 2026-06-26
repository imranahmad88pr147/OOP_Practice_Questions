//using namespace std;
//#include<iostream>
//#include<string>
//class Engine
//{
//	string type;
//	int hp;
//public:
//	Engine()
//	{
//		type = "\0";
//		hp = 0;
//		
//
//	}
//	Engine(string Type, int horsepower)
//	{
//		type = Type;
//		hp = horsepower;
//		//cout << "engine";
//	}
//
//};
//class Passenger
//{
//	string Name;
//	char Gender;
//public:
//	Passenger()
//	{
//		Name = "\0";
//
//	}
//	Passenger(string n, char g)
//	{
//		Name = n;
//		Gender = g;
//	}
//	void SetPassengerName(string name)
//	{
//		Name = name;
//	}
//	string GetPassengerName()
//	{
//		return Name;
//	}
//	char SetGender(char gender)
//	{
//		Gender = gender;
//	}
//	char GetGender()
//	{
//		return Gender;
//	}
//};
//class Bus
//{
//	string BusNo;
//	int SeatingCapacity;
//	int SeatsReservedSofar;
//	int numPassengers;
//	Engine engine;
//	Passenger* passenger;
//	//Engine engine;
//public:
//	Bus()
//	{
//		BusNo = "\0";
//		SeatingCapacity = 0;
//		SeatsReservedSofar = 0;
//		numPassengers = 0;
//
//
//	}
//	Bus(string Busnumber, int seatingcapacity, int seatsreserved, int PassengersNum, string type, int hp) :engine(type, hp)
//	{
//		BusNo = Busnumber;
//		SeatingCapacity = seatingcapacity;
//		SeatsReservedSofar = seatsreserved;
//		numPassengers = PassengersNum;
//		passenger = new Passenger[40];
//		cout << "---------Bus Created Successfully---------" << endl;
//
//	}
//	int getSeatingCapacity() {
//		return SeatingCapacity;
//	}
//
//	void setSeatingCapacity(int bCap) {
//		SeatingCapacity = bCap;
//	}
//
//	string getBusNo() {
//		return BusNo;
//	}
//
//	void setBusNo(string bNo) {
//		BusNo = bNo;
//	}
//	int getNumPassengers()
//	{
//		return numPassengers;
//	}
//	/*void DisplayInfo()
//	{
//		cout << "---------Bus Information---------" << endl;
//		cout << "Bus No: " << BusNo << endl;
//		cout << "Seating Capacity: " << SeatingCapacity << endl;
//		cout << "Seats Reserved So Far: " << SeatsReservedSofar << endl;
//		cout << "Passengers: " << endl;
//		for (int i = 0; i < SeatsReservedSofar; i++)
//		{
//			cout << i + 1 << ".";
//			cout << passenger[i].GetPassengerName() << endl;
//
//		}
//	}*/
//	void DisplayInfo()
//	{
//		cout << "---------Bus Information---------" << endl;
//		cout << "Bus No: " << BusNo << endl;
//		cout << "Seating Capacity: " << SeatingCapacity << endl;
//		cout << "Seats Reserved So Far: " << SeatsReservedSofar << endl;
//		cout << "Passengers: " << endl;
//		for (int i = 0; i < SeatsReservedSofar; i++)
//		{
//			cout << i + 1 << ". " << passenger[i].GetPassengerName() << endl;
//		}
//	}
//
//	void ReserveSeat(Passenger p)
//	{
//
//
//		passenger[SeatsReservedSofar] = Passenger(p.GetPassengerName(), p.GetGender());
//		SeatsReservedSofar++;
//
//	}
//
//};
//int main() {
//	string BusNum, Enginetype;
//	int SeatingCapacity, EngineHp;
//	cout << "Enter Bus Number: " << endl;
//	cin >> BusNum;
//	cout << "Enter Seating Capacity: " << endl;
//	cin >> SeatingCapacity;
//	cout << "Enter Engine Type : " << endl;
//	cin >> Enginetype;
//	cout << "Enter Engine Hp: " << endl;
//	cin >> EngineHp;
//	Bus bus(BusNum, SeatingCapacity, 0, 0, Enginetype, EngineHp);
//	cout << "---------Add Passengers in the Bus---------" << endl;
//	char choice = 'Y';
//	while (choice == 'Y' && bus.getNumPassengers() < bus.getSeatingCapacity()) {
//		string name;
//		char Gender;
//		cout << "Enter Passenger Name: " << endl;
//		cin.ignore();
//		getline(cin, name);
//		cout << "Enter Passenger Gender: " << endl;
//		cin >> Gender;
//		Passenger p(name, Gender);
//		bus.ReserveSeat(p);
//		if (bus.getNumPassengers() < bus.getSeatingCapacity()) {
//			cout << endl << "Add another passenger? (Y/N): ";
//			cin >> choice;
//		}
//	}
//	bus.DisplayInfo();
//}
