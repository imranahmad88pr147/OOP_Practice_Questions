using namespace std;
#include<iostream>
#include"Person.h"
#include"Student.h"
#include"Faculty.h"
#include"under.h"
#include"grad.h"
//We are getting error when inheritance is protected then the getters and setters become inaccessible too and so age.
// We are getting error when inheritance is private because age alongwith firstname and lastname is inaccessible to undergraduate and graduate.

int main()
{
	//Exercise 3.
	UnderGraduate umt("Muhammad", "\0", 22, 3.91, "\0");
	Faculty fac("Hammad", "\0", 45, 2, 420);
	umt.printStudent();
	fac.printFaculty();
	Graduate obj3("Imran", "\0", 22, 3.91, "Exposure to Pacific Ocean");
	UnderGraduate obj("John", "\0", 25, 3.01, "The Even Locator");
	//Exercise 4.
	//First and last name are private and Age is protected data member.
	//Because to control the direct access and to ensure data protection which provides security and will not allow the subclasses, 
	//child classes of Faculty and Student class to access the private data members.
	//obj1.printInformation();
	Student obj2("Imran", "\0", 21, 2.9);
	//obj2.printInformation();
	//We will get error because Student class can't access private data members of Person Class.
	obj.printUnderGraduate();
	obj3.printGraduate();
	obj.printStudent();
	
	









}
