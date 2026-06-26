//#include<iostream>
//#include<string>
//using namespace std;
//class Appointment {
//protected:
//	string description;
//	int Year;
//	int Month;
//	int Day;
//public:
//	Appointment(string description, int y, int m, int d)
//	{
//		this->description = description;
//		Year = y;
//		Month = m;
//		Day = d;
//	}
//	bool occursOn(int y, int m, int d)
//	{
//		return (Year == y && Month == m && Day == d);
//	}
//	string getdescription()
//	{
//		return description;
//	}
//};
//class Onetime :public Appointment
//{
//public:
//	Onetime(string description, int y, int m, int d)
//		:Appointment(description, y, m, d) {}
//};
//class Daily :public Appointment
//{
//public:
//	Daily(string description, int y, int m, int d)
//		:Appointment(description, y, m, d) {}
//
//
//};
//class Monthly : public Appointment
//{
//public:
//	Monthly(string description, int y, int m, int d)
//		:Appointment(description, y, m, d) {}
//
//
//};
//int main() {
//	Appointment* appointments[8];
//	int j = 6;
//	int k = 6;
//	appointments[0] = new Onetime("See the dentist", 2023, 4, 2);
//	appointments[1] = new Daily("Play game", 2023, 4, 1);
//	appointments[2] = new Monthly("Offer Prayers", 2023, 4, 1);
//	appointments[3] = new Onetime("Presentation", 2023, 4, 3);
//	appointments[4] = new Daily("Go on a long drive with someone", 2023, 4, 2);
//	appointments[5] = new Monthly("Buy a new Car", 2023, 4, 2);
//	int year, month, day;
//	int count = 0;
//	cout << "Enter date (yyyy mm dd): ";
//	cin >> year >> month >> day;
//	for (int i = 0; i < 6; i++) {
//		if (appointments[i]->occursOn(year, month, day)) {
//			cout << appointments[i]->getdescription() << endl;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == 6)
//	{
//		cout << "No appointment on this date!!";
//		cout << endl;
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		delete appointments[i];
//		appointments[i] = NULL;
//	}
//char addAppointment;
//do {
//	cout << "Add a new appointment? press y for Yess and n for No: ";
//	cin >> addAppointment;
//
//	if ((addAppointment) == 'y') {
//		string  description;
//		char type;
//		cout << "Enter appointment type (onetime press o, daily press d , monthly press m): ";
//		cin >> type;
//		cout << "Enter appointment description: ";
//		cin.ignore();
//		getline(cin, description);
//		cout << "Enter year: ";
//		cin >> year;
//		cout << "Enter month: ";
//		cin >> month;
//		cout << "Enter day: ";
//		cin >> day;
//		Appointment* NEWAppointment;
//		switch (type) {
//		case 'o':
//			NEWAppointment = new Onetime(description, year, month, day);
//			break;
//		case 'd':
//			NEWAppointment = new Daily(description, year, month, day);
//			break;
//		case 'm':
//			NEWAppointment = new Monthly(description, year, month, day);
//			break;
//		default:
//			cout << "Invalid appointment type. Appointment not added." << endl;
//			continue;
//		}
//		appointments[j] = NEWAppointment;
//		j++;
//		k++;
//	}
//} while ((addAppointment) == 'y');
//for (int i = 0; i < k; i++)
//{
//	delete appointments[i];
//	appointments[i] = NULL;
//}
//return 0;
//}
//
