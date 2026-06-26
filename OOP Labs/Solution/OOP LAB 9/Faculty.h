#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
class Faculty : public Person
{
	int course_count;
	int txt_ext;
public:
	Faculty()
	{
		course_count = 0;
		txt_ext = 0;
	}
	Faculty(string fname, string lname, int age, int coursecount, int ext) : Person(fname, lname, age)
	{
		course_count = coursecount;
		txt_ext = ext;
		cout << "Faculty() called" << endl;
	}
	void printFaculty()
	{
		cout << "Faculty Member Name: " << getFirstName() << ",Age: " << age << "," << "Number of courses: " << course_count << ",Ext." << getextension() << endl;

	}
	int getCoursecount()
	{
		return course_count;
	}
	int getextension()
	{
		return txt_ext;
	}
	void setCoursecount(int coursecount)
	{
		course_count = coursecount;
	}
	void setextension(int ext)
	{
		txt_ext = ext;
	}
	~Faculty()
	{
		cout << "~Faculty called" << endl;
	}
};
