//using namespace std;
//#include<iostream>
//class Student {
//protected:
//	int* StudentIDs;
//	int NoOfStudents;
//public:
//	Student() {
//		NoOfStudents = 0;
//		StudentIDs = nullptr;
//	}
//	Student(int n) {
//		NoOfStudents = n;
//		StudentIDs = new int[NoOfStudents];
//		cout << "Overloaded Constructor Called!!" << endl;
//
//	}
//	int getID(int index) {
//		if (index >= 0 && index < NoOfStudents)
//		return StudentIDs[index];
//		else {
//			cout << "Invalid index!!" << endl;
//		}
//	}
//	int getNoOfStudents() {
//		return NoOfStudents;
//	}
//	//n is the new id of student.
//	void setID(int n,int index) {
//		    if(index>=0&&index<NoOfStudents)
//			StudentIDs[index] = n;
//			else {
//				cout << "Invalid index!!" << endl;
//			}
//		
//	}
//
//	~Student() {
//		delete[] StudentIDs;
//		StudentIDs = nullptr;
//	}
//	void Input() {
//		cout << "Please enter the IDS of " << NoOfStudents << " Students: " << endl;
//		for (int i = 0; i < NoOfStudents; i++) {
//			cout << "Enter the ID of student " << i << endl;
//			cin >> StudentIDs[i];
//		}
//	}
//	void Search() {
//		int searchid;
//		cout << "Enter the ID of student you want to search: " << endl;
//		cin >> searchid;
//		if (searchid > 0 ) {
//			for (int i = 0; i < NoOfStudents; i++) {
//				if (StudentIDs[i] == searchid) {
//					cout << "Student Found at index " <<i<< endl;
//				}
//				
//			}
//			
//	
//
//		}
//		else if (searchid < 0 || searchid > NoOfStudents)
//		{
//			cout << "Invalid Idex. Student Not Found" << endl;
//		}
//
//	}
//	void remove() {
//		int removeid;
//		cout << "Enter the ID of student you want to remove: " << endl;
//		cin >> removeid;
//		if (removeid > 0) {
//			for (int i = 0; i < NoOfStudents; i++) {
//				if (StudentIDs[i] == removeid) {
//					StudentIDs[i] = 0;
//					cout << "Student Found at index " << i << " and it is deleted!!" << endl;
//				}
//
//			}
//		}
//
//	}
//	
//
//};
//
//
//int main() {
//	
//	int StudentChoice;
//	cout << "How many students do you want to pass in parameterized contstructor to database" << endl;
//	cin >> StudentChoice;
//	Student obj1(StudentChoice);
//	while (true) {
//
//		int choice1;
//		cout << "\t|||||||Please select one of the following options|||||||" << endl;
//		cout << "Press 1 to Input ID\nPress 2 to Search ID\nPress 3 to Remove ID\nPress 4 to SetID\nPress 5 to Return ID" << endl;
//		cin >> choice1;
//
//		if (choice1 == 1) {
//
//			obj1.Input();
//
//		}
//		else if (choice1 == 2) {
//			obj1.Search();
//			break;
//		}
//		else if (choice1 == 3) {
//			obj1.remove();
//			break;
//		}
//		else if (choice1 == 4) {
//			int index, newid;
//			cout << "Enter the index of student for  which you want to change the ID: " << endl;
//			cin >> index;
//			cout << "Enter the New ID for the student: " << endl;
//			cin >> newid;
//			obj1.setID(newid,index);
//			break;
//		}
//		else if (choice1 == 5) {
//			int index;
//			cout << "Enter the index of student for  which you want to return the ID: " << endl;
//			cin >> index;
//			cout<<obj1.getID(index);
//			break;
//		}
//
//	}
//	
//	
//}