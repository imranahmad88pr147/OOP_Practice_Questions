#pragma once
#include<iostream>
#include"Person.h"
#include"Faculty.h"
using namespace std;
class Student :public Person
{
	float cgpa;
public:
	Student()
	{
		cgpa = 0;
	}
	Student(string fname, string lname, int age, float cgpa) : Person(fname, lname, age)
	{
		this->cgpa = cgpa;

		cout << "Student() called" << endl;
	}
	void printStudent()
	{
		cout << getFirstName() << " " << getLastName() << "is " << age << " years old and his cgpa is" << cgpa << endl;

	}
	float getCgpa()
	{
		return cgpa;
	}
	void setCgpa(float cgpa)
	{
		this->cgpa = cgpa;
	}
	~Student()
	{
		cout << "~Student() called" << endl;
	}
};
