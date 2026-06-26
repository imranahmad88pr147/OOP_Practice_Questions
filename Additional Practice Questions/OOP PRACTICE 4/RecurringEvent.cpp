//using namespace std;
//#include<iostream>
//class Date
//{
//protected:
//	int year;
//	int month;
//	int day;
//public:
//	Date(int a, int b, int c)
//	{
//		year = a;
//		month = b;
//		day = c;
//
//	}
//	void addDay(int n)
//	{
//		this->day = day + n;
//	}
//	void addMonth(int n)
//	{
//		this->month = month + n;
//
//	}
//	void addYear(int n)
//	{
//		this->year = year + n;
//	}
//	void print()
//	{
//
//	}
//};
//class Event
//{
//protected:
//	string title;
//	Date date;
//public:
//	Event(string event, const Date&d) :date(d)
//	{
//		title = event;
//	}
//	virtual void print();
//};
//class RecurringEvent : public Event
//{
//public:
//	RecurringEvent(string e, Date const&d) :Event(e, d) {
//
//	}
//	virtual Event** occurrences(int) = 0;
//};
//class DailyEvent :public RecurringEvent
//{
//	
//public:
//	DailyEvent(string e, const Date&d) :RecurringEvent(e,d)
//	{
//	
//	}
//};
//class WeeklyEvent :public RecurringEvent
//{
//	
//public:
//	WeeklyEvent(string e, const Date& d) :RecurringEvent(e,d)
//	{
//
//	}
//};
//class MonthlyEvent :public RecurringEvent
//{
//
//public:
//	MonthlyEvent(string e, const Date& d) :RecurringEvent(e, d)
//	{
//
//	}
//};
//
//int main()
//{
//	RecurringEvent** rec = new RecurringEvent * [3];
//	rec[0] = new DailyEvent("client meeting", Date(2022, 06, 8));
//	rec[1] = new WeeklyEvent("lecture", Date(2022, 06, 8));
//	rec[2] = new MonthlyEvent("project monitoring",Date(2022, 06, 8));
//	cout << "Imran";
//	for (int i = 0; i < 3; i++) {
//		Event** occurr = rec[i]->occurrences(3);
//		for (int j = 0; j < 3; j++) {
//			occurr[j]->print();
//			cout << endl;
//		}
//	}
//	
//	return 0;
//}