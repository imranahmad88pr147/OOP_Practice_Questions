#pragma once
#include<iostream>

#include"Student.h"
#include"Person.h"
using namespace std;
class Graduate : public Student
{
	string thesis_topic;
public:
	Graduate()
	{
		thesis_topic = "\0";
		cout << "Graduate() called" << endl;
	}
	Graduate(string fname, string lname, int age, float cgpa, string thesisTopic) : Student(fname, lname, age, cgpa)
	{
		thesis_topic = thesisTopic;
	}
	string getThesis()
	{
		return thesis_topic;
	}
	void setThesis(string thesis)
	{
		thesis_topic = thesis;
	}
	void printGraduate()
	{
		cout << getFirstName() << " is a graduate student, his cgpa is " << getCgpa() << " and his thesis topic is " << thesis_topic << endl;
	}
	~Graduate()
	{
		cout << "~Graduate() called" << endl;
	}

};

