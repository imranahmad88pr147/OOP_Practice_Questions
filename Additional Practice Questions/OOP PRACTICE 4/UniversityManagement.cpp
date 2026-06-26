////using namespace std;
////#include<iostream>
////class Department
////{
////	char* DepartmentName;
////	int noOfFacMembers;
////	int noOfStaffMembers;
////public:
////	Department()
////	{
////		DepartmentName = nullptr;
////		noOfFacMembers = 0;
////		noOfStaffMembers = 0;
////	}
////	Department(const char* departmentName, int* fac, int* staff)
////	{
////		noOfFacMembers = fac;
////		noOfStaffMembers = staff;
////		int sizeofdeptName = strlen(departmentName);
////		DepartmentName = new char[sizeofdeptName+1];//We had incremented size by 1 in order to store null character at last index.
////		for (int i = 0; i < sizeofdeptName; i++)
////		{
////			DepartmentName[i] = departmentName[i];
////		}
////		DepartmentName[sizeofdeptName] = '\0';
////
////
////
////	}
////
////};
////class UniversityCampus:public Department
////{
////	char* campusname;
////	Department* departments;
////public:
////	UniversityCampus()
////	{
////		campusname = nullptr;
////		departments = nullptr;
////	}
////	UniversityCampus( string CampusName, const char* departmentslist, int* faculty, int* staff) 
////	{
////
////		int sizeofCampusName = CampusName.length();
////		campusname = new char[sizeofCampusName + 1];
////		for (int i = 0; i < sizeofCampusName; i++)
////		{
////			campusname[i] = CampusName[i];
////		}
////		campusname[sizeofCampusName] = '\0';
////
////		departments = new Department[3];
////		for (int i = 0; i <3 ; ++i) {
////			departments[i] = Department(departmentslist[i], faculty[i], staff[i]);
////		}
////
////	}
////
////
////};
////int main()
////{
////	
////		const char* dpts[20] = { "CS","EE","A & F", nullptr}; // it is same to char **
////		int faculty[] = { 46,33,23 }, staff[] = { 4, 3, 5 };
////		UniversityCampus lhr("Lahore", dpts, faculty, staff);
////			//lhr.printCampusDetails();
////		//bool sucessFull = lhr + "Mng"; //Adds the department if not already exists
////		//and sets the value of faculty and staff for this department to zero.
////
////		//1lhr.addFaculty("Mng", 44);
////		////if department exists number of faculty members will be added to that department.
////
////		//1hr.addStafftoDepartment(“Mng”, 4);
////		////if department exists number of staff members will be added to that department.
////
////		//sucessFull = lhr - "A&F";
////		////There must be member function in administration to find this member and delete it
////		//if (sucessFull)
////		//	cout << "Department removed successfully.";
////		//else
////		//	cout << "Data Not Found.\n";
////
////}
//#include <iostream>
//using namespace std;
//#include <cstring>
//
//class Department {
//    char* DepartmentName;
//    int noOfFacMembers;
//    int noOfStaffMembers;
//
//public:
//    Department()
//        : DepartmentName(nullptr), noOfFacMembers(0), noOfStaffMembers(0) {}
//
//    Department(const char* departmentName, int fac, int staff)
//        : noOfFacMembers(fac), noOfStaffMembers(staff) {
//        int len = strlen(departmentName);
//        DepartmentName = new char[len + 1];
//       // strcpy(DepartmentName, departmentName);
//        for (int i = 0; i < len; i++)
//        {
//            DepartmentName[i] = departmentName[i];
//        }
//        DepartmentName[len] = '\0';
//        //cout << DepartmentName;
//    }
//    char* getdepartmentName( )
//    {
//        return DepartmentName;
//    }
//    int getFaculty()
//    {
//        return noOfFacMembers;
//    }
//    int getStaff()
//    {
//        return noOfStaffMembers;
//    }
//
//
//   /* ~Department() {
//        delete[] DepartmentName;
//    }*/
//
//};
//
//class UniversityCampus  {
//    char* campusname;
//    Department* departments;
//
//public:
//    UniversityCampus(const char* CampusName, const char* departmentslist[], int* faculty, int* staff)
//        : campusname(nullptr), departments(nullptr) {
//
//        int sizeofCampusName = strlen(CampusName);
//        campusname = new char[sizeofCampusName + 1];
//        //strcpy(campusname, CampusName);
//        for (int i = 0; i < sizeofCampusName; i++)
//        {
//            campusname[i] = CampusName[i];
//        }
//        campusname[sizeofCampusName] = '\0';
//        int numDepts = 3;
//        departments = new Department[numDepts];
//        for (int i = 0; i < numDepts; ++i) {
//            departments[i] = Department(departmentslist[i], faculty[i], staff[i]);
//            
//        }
//    }
//   
//    void addDepartment(const char* newDepartmentName)
//    {
//        Department* newDepartments = new Department[4];
//        for (int i = 0; i < 3; ++i) {
//            newDepartments[i] = departments[i];
//        }
//
//        int faculty = 0; // You mentioned setting faculty to zero
//        int staff = 0;   // You mentioned setting staff to zero
//
//        newDepartments[3] = Department(newDepartmentName, faculty, staff);
//        //cout << newDepartments[3].getdepartmentName();
//        delete[] departments;
//        departments = newDepartments;
//        
//       // delete[]newDepartments;
//        
//    }
//    void Print()
//    {
//        cout << "Campus Name: " << campusname << endl;
//        for (int i = 0; i < 4; ++i) {
//            cout << "Department: ";
//            cout << departments[i].getdepartmentName();
//            cout << "  Faculty: " << departments[i].getFaculty() << "  Staff: " << departments[i].getStaff() << endl;
//
//        }
//
//    }
//};
//
// 
//
//
//int main() {
//    const char* dpts[3] = { "CS", "EE", "A & F" };
//    int faculty[] = { 46, 33, 23 };
//    int staff[] = { 4, 3, 5 };
//
//    UniversityCampus lhr("Lahore", dpts, faculty, staff);
//  
//    lhr.addDepartment("Civil");
//    lhr.Print();
//    
//
//    return 0;
//}
