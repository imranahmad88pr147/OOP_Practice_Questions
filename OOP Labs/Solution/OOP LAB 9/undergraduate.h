#pragma once
#include<iostream>
#include"Student.h"
#include"Person.h"


using namespace std;
class UnderGraduate :public Student
{
	string fyp_name;
public:
	UnderGraduate()
	{
		fyp_name = "\0";
	}
	UnderGraduate(string fname, string lname, int age, float cgpa, string fypName) : Student(fname, lname, age, cgpa)
	{
		fyp_name = fypName;
		cout << "Undergraduate() called" << endl;
	}
	void printUnderGraduate()
	{
		cout << getFirstName() << " is an undergraduate student, his cgpa is " << getCgpa() << " and his final year project is titled " << fyp_name << endl;
	}
	string getFypname()
	{
		return fyp_name;
	}
	void setFypName(string fyp)
	{
		fyp_name = fyp;
	}
	~UnderGraduate()
	{
		cout << "~UnderGraduate() called" << endl;
	}

};

