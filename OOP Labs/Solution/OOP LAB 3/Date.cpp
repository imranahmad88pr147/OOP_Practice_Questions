
using namespace std;
#include<iostream>
class Date {
	int Day;
	int Month;
	int Year;
public:
	Date() {
		Day = 1;
		Month = 1;
		Year = 1926;
		cout << "Default Constructor Called!" << endl;
		cout << endl;
	}
	Date(int d, int m, int y) {
		cout << "Overloaded function called! " << endl;
		Day = d;
		Month = m;
		Year = y;
	}
	void print() {
		cout << Day << "/" << Month << "/" << Year << endl;
	}
	~Date() {
		cout << "Destructor called" << endl;
	}
	int getDay() {
		return Day;
	}
	int getMonth() {
		return Month;
	}
	int getYear() {
		return Year;
	}
	void Input();
	void setDay(int d) {
		Day = d;
	}
	void setMonth(int m) {
		Month = m;
	}
	void setYear(int y) {
		Year = y;
	}
	Date IncrementMonth() {
		this->Month = Month + 1;
		return *this;
	}
	int Compare(Date obj) {
		if (this->Day > obj.Day && this->Month > obj.Month && this->Year > obj.Year) {
			return 1;
		}
		else if (this->Day < obj.Day && this->Month < obj.Month && this->Year < obj.Year)
			return -1;
		else {
			return 0;
		}
	}
	



};
void Date::Input() {
	cout << "HEY Enter your Date of Birth: " << endl;
	cout << "Enter Day: " << endl;
	cin >> Day;
	cout << "Enter Month: " << endl;
	cin >> Month;
	cout << "Enter Year: " << endl;
	cin >> Year;
}

int main() {
	Date date1;
	date1.print();
	Date IndependenceDay(14, 8, 1947);
	IndependenceDay.print();
	date1.Input();
	date1.print();
	Date xmaxDay;
	xmaxDay.print();
	xmaxDay.setDay(25);
	xmaxDay.setMonth(12);
	xmaxDay.setYear(2018); 
    cout <<"XmaxDay\t"<< xmaxDay.getDay() << "/" << xmaxDay.getMonth() << "/" << xmaxDay.getYear() << endl;
	Date temp;
	temp = xmaxDay;
	cout << "Temp Date\t";
	temp.print();
	Date temp1;
	temp1 = date1;
	temp1.IncrementMonth();
	temp1.print();
	cout << endl;
	cout << xmaxDay.Compare(temp1);
	



}