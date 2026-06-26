using namespace std;
#include<iostream>
#include<string>
#include<fstream>


class Book {

	int PublicationID;
	string title;
	string author;


public:

	Book() {
		PublicationID = 0;
		title = "";
		author = "";
	}
	Book(int id, string title, string author) {
		PublicationID = id;
		this->title = title;
		this->author = author;
	}
	void Add_a_book(int& BookNumber) {
		int PbID;
		string Title, Author;
		cout << "Enter Publication ID of Book: " << endl;
		cin >> PbID;
		cin.ignore();
		cout << "Enter Title of Book: " << endl;
		//cin >> Title;
		getline(cin, Title);
		cout << "Enter Author of Book: " << endl;
		getline(cin, Author);
		this->PublicationID = PbID;
		this->title = Title;
		this->author = Author;

		BookNumber++;
		//We can also call parameterized constructor here as alternative method to save data members from the user . e.g.,
		/*books[BookNumber] = Book(PbID, Title, Author);
		BookNumber++;*/

	}
	void Display_a_book() {

		cout << "Publication ID: " << PublicationID << endl;
		cout << "Author Name: " << author << endl;
		cout << "Book Title: " << title << endl;
		cout << endl;


	}
	bool Display_a_specifcbook(int PbID, string Author, string Title)
	{


		if (this->author == Author && this->PublicationID == PbID && this->title == Title)
		{
			/*cout << "Book Found!!!" << endl;
			bookcheck = 1;
			this->Display_a_book();*/
			return true;


		}

		else
		{
			return false;
			//cout << "Book Not Found!!!" << endl;
		}



	}
	void DeleteBook(Book*& books, int& Booknumber, int& i)
	{
		Book* newbooks = new Book[Booknumber-1];
		//cout << "Value of i in DeleteBook Function: " << i;
		if (i == 0)
		{
			for (int j = 1; j < Booknumber; j++)
			{
				newbooks[j - 1] = books[j];
			}
		}
		else if (i != 0)
		{

			for (int j = 0; j < i; j++)
			{
				newbooks[j] = books[j];
			}
			for (int j = i + 1; j < Booknumber; j++)
			{
				newbooks[j-1] = books[j];
			}
		}
		Booknumber--;
		//cout << "Book Number after deleting book: " << Booknumber << endl;//3
		//Booknumber -= Booknumber - 1;
		delete[]books;
		books = newbooks;

	}
	
	string getBookTitle()
	{
		return title;
	}
	string getBookAuthor()
	{
		return author;
	}
	int getPublicationID()
	{
		return PublicationID;
	}




};
//The following function will save the Book Data in this format: Publication ID, Author Name, Book Title.
void saveBookData(Book*books,int Booknumber)
{
	ofstream file("BooksData.txt", ios::app);
	if (file.is_open()) {
		for (int i = 0; i < Booknumber; i++) {
			file << books[i].getPublicationID() << ","
				<< books[i].getBookAuthor() << ","
				<< books[i].getBookTitle() << endl;
		}
		file.close();
	}
}

void menu() {
	cout << "\t\t\t--------------- WELCOME TO IMRAN LIBRARY SYSTEM ---------------\n\n";
	int choice;
	int BookNumber = 0;
	Book* books = new Book[100];
	do {
		int choice1;
		cout << "Please select from one of the following options\n";
		cout << "Press 1 to ADD A BOOK\n";
		cout << "Press 2 to DISPLAY A SPECIFIC BOOK\n";
		cout << "Press 3 to DISPLAY ALL BOOKS\n";
		cout << "Press 4 to DELETE A BOOK\n";
		cin >> choice1;

		if (choice1 == 1) { 
			books[BookNumber].Add_a_book(BookNumber);
			saveBookData(books,BookNumber);
			system("cls");

		}
		else if (choice1 == 2) {
			int PbID;
			string Title, Author;
			cout << "Enter Publication ID of Book: " << endl;
			cin >> PbID;
			cin.ignore();
			cout << "Enter Title of Book: " << endl;
			getline(cin, Title);
			cout << "Enter Author of Book: " << endl;
			getline(cin, Author);
			bool bookcheck = false;
			for (int i = 0; i < BookNumber; i++)
			{
				bookcheck = books[i].Display_a_specifcbook(PbID, Author, Title);
				if (bookcheck == true)

				{
					cout << "Book Found!!" << endl;
					books[i].Display_a_book();
					break;
				}


			}
			if (bookcheck == false)
				cout << "Book Not Found" << endl;





		}
		else if (choice1 == 3) {
			for (int i = 0; i < BookNumber; i++) {
				//cout << "Book Number: " << BookNumber;
				books[i].Display_a_book();
			}

			//cout << endl << endl;
		}
		else if (choice1 == 4)
		{
			cout << "Please Enter the details of book you want to delete " << endl;
			int PbID;
			string Title, Author;
			cout << "Enter Publication ID of Book: " << endl;
			cin >> PbID;
			cin.ignore();
			cout << "Enter Title of Book: " << endl;
			getline(cin, Title);
			cout << "Enter Author of Book: " << endl;
			getline(cin, Author);
			bool bookcheck = false;
			for (int i = 0; i < BookNumber; i++)
			{
				bookcheck = books[i].Display_a_specifcbook(PbID, Author, Title);
				if (bookcheck == true)

				{

					cout << "Book Found and Deleted!!" << endl;
					books[i].DeleteBook(books, BookNumber, i);
				}
			}
		}
		cout << "Enter your choice:  Press -1 to exit program otherwise press any key!! " << endl;
		cin >> choice;



	}

	while (choice != -1);
	delete[]books;
	books = nullptr;
}



int main() {

	menu();
}