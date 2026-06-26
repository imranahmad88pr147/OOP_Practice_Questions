////using namespace std;
////#include<iostream>
////class Set
////{
////	int size;
////	int* set;
////public:
////	Set(int s)
////	{
////
////		size = s;
////		set = new int[size + 1];
////	}
////	void insert(int* array, int s)
////	{
////		for (int i = 0; i < size; i++)
////		{
////			set[i] = array[i];
////		}
////		set[size] = -1;
////
////	}
////	void print(string s)
////	{
////		cout << s << ":{";
////		for (int i = 0; i < size; i++)
////		{
////			cout << set[i];
////			if (set[i + 1] != -1)
////				cout << ",";
////		}
////		cout << "}";
////		cout << endl;
////	}
////	Set unionset(Set obj)
////	{
////		int newsize = size + obj.size;
////		Set temp(newsize);
////
////		int k = 0, count = 0, j = 0;
////
////		/*for (int i = 0; i < size; i++)
////		{
////			while (k < obj.size)
////			{
////				if (set[i] == obj.set[k])
////				{
////					count++;
////				}
////				k++;
////			}
////		}*/
////		for (int i = 0; i < obj.size; i++) {
////			bool found = false;
////			for (int m = 0; m < size; m++) {
////				if (obj.set[i] == set[m]) {
////					found = true;
////					break;
////				}
////			}
////			if (!found) {
////				temp.set[j++] = obj.set[i];
////			}
////		}
////
////		return temp;
////	}
////	Set intersection(Set obj)
////	{
////		/*int count = 0;
////		for (int i = 0; i < obj.size; i++) {
////			bool found = false;
////			for (int m = 0; m < size; m++) {
////				if (obj.set[i] == set[m]) {
////					found = true;
////					count++;
////				}
////			}
////		}
////		Set temp(count);*/
////		int maxSize = size > obj.size ? size : obj.size;
////		Set result(maxSize);
////
////		int count = 0;
////
////		for (int i = 0; i < size; i++) {
////			for (int j = 0; j < obj.size; j++) {
////				if (set[i] == obj.set[j]) {
////					result.set[count++] = set[i];
////					break;
////				}
////			}
////		}
////
////		return result;
////	}
////	Set difference(Set obj) {
////		Set result(size);
////
////		int count = 0;
////
////		for (int i = 0; i < size; i++) {
////			bool found = false;
////			for (int j = 0; j < obj.size; j++) {
////				if (set[i] == obj.set[j]) {
////					found = true;
////					break;
////				}
////			}
////			if (!found) {
////				result.set[count++] = set[i];
////			}
////		}
////
////		return result;
////	}
////
////
////};
////		
////	int main()
////{
////	int a1[] = { 10,5,7,3,9 };
////	Set s1(5);
////	s1.insert(a1, 5);
////	s1.print("s1");
////	int a2[] = { 2,9,6 };
////	Set s2(3);
////	s2.insert(a2, 3);
////	s2.print("s2");
////	Set s3 = s1.unionset(s2);
////	Set s4 = s1.intersection(s2);
////	Set s5 = s1.difference(s2);
////	s3.print("s3");
////	s4.print("s4");
////	s5.print("s5");
////}
//////class Date {
//////private:
//////	 int day;
//////    int month;
//////	 int year;
//////public:
//////	Date(int d = 1, int m = 1, int y = 2000) {
//////		day = d; month = m; year = y;
//////	}
//////	void Print() {
//////		cout << day << "-" << month << "-" << year << endl;
//////	}
//////};//end of Date class
//////class Student {
//////private:
//////	char name[20];
//////	Date dateOfBirth;
//////	 int* marks;
//////public:
//////	Student(const char* n , int d = 1, int m = 1,
//////		int y = 2000, int* _marks = 0) :dateOfBirth(d, m, y) {
//////		//strcpy(name, n);
//////		int sizeofname = strlen(n);
//////		for (int i = 0; i < sizeofname ; i++)
//////		{
//////			name[i] = n[i];
//////		}
//////		name[sizeofname ] = '\0';
//////		if (_marks != 0) {
//////			marks = new int[5];
//////			for (int i = 0; i < 5; i++) {
//////				marks[i] = _marks[i];
//////			}
//////		}
//////		else
//////			marks = 0;
//////	}
//////	void Print()
//////	{
//////		cout << name << "\t";
//////		dateOfBirth.Print();
//////		for (int i = 0; i < 5; i++) {
//////			cout << marks[i] << " ";
//////		}
//////		cout << endl;
//////	}
//////	~Student() {
//////		if (marks != 0)
//////			delete[] marks;
//////	}
//////};//end of student class
////////int Date::day = 1;
////////int Date::month = 1;
////////int Date::year = 2000;
////////int* Student::marks = 0;
//////int main()
//////{
//////	int size = 5;
//////	int marks1[5] = { 90, 80, 20, 30 , 60 };
//////	int marks2[5] = { 40, 50, 60, 70 , 80 };
//////	char name[20] = { 'A','L','I' };
//////	Student s1(name, 20, 2, 1999, marks1);
//////	Student s2("Hamza", 5, 1, 1998, marks2);
//////	s1.Print();
//////	s2.Print();
//////}
//#include <iostream>
//using namespace std;
//
//class Set {
//private:
//    int size;
//    int* set;
//
//public:
//    Set(int s) : size(s), set(new int[size]) {
//        for (int i = 0; i < size; i++) {
//            set[i] = 0;  // Initialize elements to 0
//        }
//    }
//
//    void insert(int* array) {
//        for (int i = 0; i < size; i++) {
//            set[i] = array[i];
//        }
//    }
//   /* void print(string s) {
//        cout << s << ":{";
//        for (int i = 0; i < result.size; i++) {
//            cout << set[i];
//            if (i < result.size - 1) {
//                cout << ",";
//            }
//        }
//        cout << "}" << endl;
//    }*/
//    void print(string s) {
//        cout << s << ":{";
//        for (int i = 0; i < size; i++) {
//            cout << set[i];
//            if (i < size - 1) {
//                cout << ",";
//            }
//        }
//        cout << "}" << endl;
//    }
//
//
//
//  
//    Set unionset(Set obj);
//    Set intersection(Set obj);
//    Set difference(Set obj);
//
//    ~Set() {
//       // delete[] set;
//    }
//};
//
//Set Set::unionset(Set obj) {
//
//    int count = 0;
//
//
//
//    for (int i = 0; i < obj.size; i++) {
//        bool found = false;
//        for (int j = 0; j < size; j++) {
//            if (obj.set[i] == set[j]) {
//                found = true;
//                break;
//            }
//            count++;
//        }
//
//        int newsize = size + count;
//        Set result(newsize);
//        for (int i = 0; i < size; i++) {
//            result.set[i] = set[i];
//        }
//        for (int i = 0; i < obj.size; i++) {
//            bool found = false;
//            for (int j = 0; j < size; j++) {
//                if (obj.set[i] == set[j]) {
//                    found = true;
//                    break;
//                }
//
//            }
//            if (!found) {
//                result.set[result.size++] = obj.set[i];
//            }
//        }
//
//        return result;
//    }
//}
//
//Set Set::intersection(Set obj) {
//    Set result(size);
//
//    result.size = 0;
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < obj.size; j++) {
//            if (set[i] == obj.set[j]) {
//                result.set[result.size++] = set[i];
//                break;
//            }
//        }
//    }
//
//    return result;
//}
//
//Set Set::difference(Set obj) {
//    Set result(size);
//
//    result.size = 0;
//
//    for (int i = 0; i < size; i++) {
//        bool found = false;
//        for (int j = 0; j < obj.size; j++) {
//            if (set[i] == obj.set[j]) {
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            result.set[result.size++] = set[i];
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    int a1[] = { 10, 5, 7, 3, 9 };
//    Set s1(5);
//    s1.insert(a1);
//    s1.print("s1");
//
//    int a2[] = { 2, 9, 6 };
//    Set s2(3);
//    s2.insert(a2);
//    s2.print("s2");
//
//    Set s3 = s1.unionset(s2);
//    s3.print("s3 (Union)");
//
//    Set s4 = s1.intersection(s2);
//    s4.print("s4 (Intersection)");
//
//    Set s5 = s1.difference(s2);
//    s5.print("s5 (Difference)");
//
//    return 0;
//}
