//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//class Media
//{
//protected:
//	char* title;
//public:
//	Media()
//	{
//		title = nullptr;
//	}
//	Media(const char* t)
//	{
//		int length = strlen(t);
//		title = new char[length + 1];
//		for (int i = 0; i < length; i++)
//		{
//			title[i] = t[i];
//		}
//		title[length] = '\0';
//	}
//	~Media() { delete[]title; title = nullptr; }
//
//	virtual void display() = 0;
//};
//class Book :public Media
//{
//private:
//	char* authorname;
//	char* ISBN;
//public:
//	Book()
//	{
//		authorname = nullptr; ISBN = nullptr;
//	}
//	Book(const char* t, const char* a_name, const char* isbn) : Media(t)
//	{
//		int length = strlen(a_name);
//		authorname = new char[length + 1];
//		for (int i = 0; i < length; i++)
//		{
//			authorname[i] = a_name[i];
//		}
//		authorname[length] = '\0';
//		//------
//		int length2 = strlen(isbn);
//		ISBN = new char[length2 + 1];
//		for (int i = 0; i < length2; i++)
//		{
//			ISBN[i] = isbn[i];
//		}
//		ISBN[length2] = '\0';
//	}
//	~Book()
//	{
//		delete[]authorname;
//		delete[]ISBN;
//	}
//	void display()
//	{
//		cout << "Author Name : " << authorname << endl;
//		cout << "ISBN :" << ISBN << endl;
//	}
//};
//class Magazine :public Media
//{
//	char* monthname;
//	int year;
//public:
//	Magazine()
//	{
//		monthname = nullptr;
//		year = 0;
//	}
//	Magazine(const char* t, const char* m, int y) :Media(t)
//	{
//		year = y;
//		//---
//		int length = strlen(m);
//		monthname = new char[length + 1];
//		for (int i = 0; i < length; i++)
//		{
//			monthname[i] = m[i];
//		}
//		monthname[length] = '\0';
//	}
//	~Magazine()
//	{
//		delete[]monthname;
//	}
//	void display()
//	{
//		cout << "Month Namae : " << monthname << endl;
//		cout << "Year : " << year << endl;
//	}
//};
//class CD :public Media
//{
//	int capacity;
//public:
//	CD()
//	{
//		capacity = 0;
//	}
//	CD(const char* t, int c) :Media(t)
//	{
//		capacity = c;
//	}
//	~CD() { }
//	void display()
//	{
//		cout << "Capacity : " << capacity << endl;
//	}
//};
//class Shelf
//{
//	Media** M;
//	int currsize;
//	int maxsize;
//public:
//	Shelf()
//	{
//		M = nullptr;
//		currsize = 0; maxsize = 0;
//	}
//	Shelf(int max)
//	{
//		maxsize = max;
//		currsize = 0;
//		M = new Media * [maxsize];
//	}
//	void insert(Media* ptr)
//	{
//		if (currsize < maxsize) {
//			M[currsize++] = ptr;
//			cout << "\nItem Added Successfully \n";
//		}
//		else {
//			cout << "\nSize cant be more than max\n";
//		}
//	}
//	void displaycontents()
//	{
//		cout << "Contents : \n";
//		for (int i = 0; i < currsize; i++)
//		{
//			M[i]->display();
//		}
//	}
//	~Shelf()
//	{
//		for (int i = 0; i < currsize; i++)
//		{
//			delete[]M;
//		}
//		delete[]M;
//	}
//};
//int main()
//{
//	int max;
//	cout << "Enter the number of contents for shelf : ";
//	cin >> max;
//	Shelf shelf(max);
//	int choice;
//	while (true)
//	{
//
//		cout << "\t\tMenu\n";
//		cout << "Enter 1 to create a Book \n";
//		cout << "Enter 2 to create a Magazine \n";
//		cout << "Enter 3 to create a CD \n";
//		cout << "Enter 4 to Display Contents of Shelf \n";
//		cout << "Enter 5 to Exit\n";
//		//---
//		cout << "Enter Your Choice : "; cin >> choice;
//		if (choice >= 1 && choice <= 3)
//		{
//			char title[100];
//			cout << "Enter title: ";
//			cin.ignore();
//			cin.getline(title, 100);
//			if (choice == 1) //book
//			{
//				char name[100]; char isbn[100];
//				cout << "Enter the name of author : ";
//				cin.ignore();
//				cin.getline(name, 100);
//				cout << "Enter the ISBN : ";
//				cin.ignore();
//				cin.getline(isbn, 100);
//				shelf.insert(new Book(title, name, isbn));
//			}
//			else if (choice == 2) {
//				char month[100];
//				int year;
//				cout << "Enter month of publication: ";
//				cin.getline(month, 100);
//				cout << "Enter year of publication: ";
//				cin >> year;
//
//				shelf.insert(new Magazine(title, month, year));
//			}
//			else if (choice == 3) {
//				int capacity;
//				cout << "Enter CD capacity in MBs: ";
//				cin >> capacity;
//				cin.ignore();
//				shelf.insert(new CD(title, capacity));
//			}
//		}
//		else if (choice == 4)
//		{
//			shelf.displaycontents();
//		}
//		else if (choice == 5)
//		{
//			cout << "Ending program\n";
//			break;
//		}
//		else
//		{
//			cout << "Invalid choice. Please select again." << endl;
//		}
//
//	}
//
//	return 0;
//}