#pragma once
using namespace std;
#include<iostream>
class Date {
	int Day;
	int Month;
	int Year;
public:
	Date();
	int getDay() {
		return Day;
	}
	int getMonth() {
		return Month;
	}
	int getYear() {
		return Year;
	}
	void print();


};