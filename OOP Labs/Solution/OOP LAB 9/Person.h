#pragma once
#include<iostream>
using namespace std;
class Person
{
	string first_name;
	string last_name;
protected:
	int age;
public:
	Person()
	{
		first_name = "\0";
		last_name = "\0";
	}
	Person(string fname, string lname, int age)
	{
		first_name = fname;
		last_name = lname;
		this->age = age;

		cout << "Person() called" << endl;
	}
	string getFirstName()
	{
		return first_name;
	}
	string getLastName()
	{
		return last_name;
	}
	void setFirstName(string f)
	{
		first_name = f;
	}
	void setLastName(string l)
	{
		last_name = l;
	}
	void printInformation()
	{
		cout << first_name << " is 22 years old" << endl;
	}
	~Person()
	{
		cout << "~Person() called" << endl;
	}


};